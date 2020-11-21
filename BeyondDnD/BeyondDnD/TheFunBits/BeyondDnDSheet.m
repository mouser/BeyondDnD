//
//  BeyondDnDSheet.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-02-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "BeyondDnDSheet.h"
@import Cocoa;

#define kDNDB_CharactersPage    @"https://www.dndbeyond.com/characters/"
#define kDNDB_SingleCharacter   @"https://www.dndbeyond.com/character/"
#define kDNDB_JSON_path         @"json"
#define kDNDB_JSON_STAT_ID      @"id"
#define kDNDB_JSON_STAT_NAME    @"name" /*unused by DnDB*/
#define kDNDB_JSON_STAT_VALUE   @"value"

#define kDNDB_CurrentXP         @"currentXp"
#define kDNDB_BaseHitPoints     @"baseHitPoints"
#define kDNDB_TempHitPoints     @"overrideHitPoints"
#define kDNDB_Name              @"name"
#define kDNDB_Campaign          @"campaign"
#define kDNDB_Characters        @"characters"

//  @[@{id:1, value: n}, ..., @{id:6, value: n}]
#define kDNDB_Stats             @"stats"

@interface BeyondDnDSheet()

@property (nonatomic, retain) DnDBCharacter*            character;

@property (nonatomic, retain) NSMutableDictionary*      charPartyData;

@property (nonatomic, retain) NSImage*                  cashedSnapshot;
@end

@implementation BeyondDnDSheet

+ (instancetype _Nullable) fromCharacterURL: (NSURL*) url
{
    BeyondDnDSheet*          sheetInfo   =   [[self alloc] initWithURL: url];
    
    return sheetInfo;
}

+ (NSString*) jSonPathFrom: (NSString*) absolutePath
{
    NSMutableString*    characterPath   =   absolutePath.mutableCopy;
    
    if ([characterPath hasPrefix: kDNDB_CharactersPage])
    {
        [characterPath replaceOccurrencesOfString: kDNDB_CharactersPage
                                       withString: kDNDB_SingleCharacter
                                          options: 0
                                            range: NSMakeRange(0, characterPath.length - 1)];
        
        characterPath = (id) [characterPath stringByAppendingPathComponent: kDNDB_JSON_path];
    }
    
    return characterPath;
}

- (NSInteger) integerFromJSonNumber: (id<NSObject>) someValue
{
    NSInteger   result  =   0;
    
    if ([someValue isKindOfClass: NSNumber.class])
    {
        result = ((NSNumber*) someValue).integerValue;
    }
    
    return result;
}

- (instancetype) initWithURL: (NSURL*) url
{
    self = [super init];
    
    if (self)
    {
        NSString*               characterID =   url.absoluteString.lastPathComponent;

        url = [NSURL URLWithString: [self.class jSonPathFrom: url.absoluteString]];
    
        NSData*                 jsonData    =   [NSData dataWithContentsOfURL: url];
        NSError*                error       =   nil;
        
        NSMutableDictionary*    jsonDict    =   (id) [NSJSONSerialization JSONObjectWithData: jsonData
                                                                                     options: NSJSONReadingMutableContainers | NSJSONReadingMutableLeaves
                                                                                       error: &error];
        
        if (!error)
        {
            self.character = DnDBCharacter.new;
            
            [self.character setValuesForKeysWithDictionary: jsonDict];
            
            // TODO: old code to remove
            
            //drill down to useful stuff
            NSMutableDictionary*    campaign            =   jsonDict[kDNDB_Campaign];     //campaign associated with this particular character
            NSArray*                campaignCharacters  =   campaign[kDNDB_Characters];   //characters associated with this campaign
            
            if (campaignCharacters.count)
            {
                for (NSDictionary* aCharDict in campaignCharacters)
                {
                    NSString*   thisPCID    =   aCharDict[@"characterId"];
                    
                    if ([thisPCID.description isEqualToString: characterID])
                    {
                        self.charPartyData = (id) aCharDict;
                        break;
                    }
                }
            }
            else
            {
                //nothing to see; trash self & return nil
                self = nil;
            }
        }
        else
        {
            //nothing to see; trash self & return nil
            self = nil;
        }
    }
    
    return self;
}

- (NSInteger) levelFrom: (NSInteger) xp
{
    NSInteger   level   =   0;
    
    //This is goofy but there's no math that translates. It's an arbitrary scale.
    NSArray<NSNumber*>* levels  =   @[ @(0), @(300), @(900), @(2700), @(6500), @(14000), @(23000), @(34000), @(48000), @(64000),
                                       @(85000), @(100000), @(120000), @(140000), @(165000), @(195000), @(225000), @(265000), @(305000), @(355000)];
    
    for (NSNumber* aLevelMax in levels)
    {
        if (xp >= aLevelMax.integerValue)
        {
            level++;
        }
    }
    
    if (level == 20)
    {
        //Rhu-ho. Reached end of scale. Use the last two level XP progressiosn as constant for extra levels
        
        xp -= 355000;
        NSInteger   extraLevelsProgressions     =   355000 - 305000;
        
        level += xp / extraLevelsProgressions;
    }
    
    return level;
}

#pragma mark - Public APIs

+ (BOOL) isCharacterPage: (NSString*) urlString
{
    return [urlString hasPrefix: kDNDB_CharactersPage];
}

- (BOOL) loaded
{
    return self.character != nil;
}

- (NSImage*) snapshot
{
    if (!_cashedSnapshot)
    {
        NSString*   urlString =   self.charPartyData[@"avatarUrl"];
        
        _cashedSnapshot = [[NSImage alloc] initWithContentsOfURL: [NSURL URLWithString: urlString]];
    }
    
    return _cashedSnapshot;
}

- (NSInteger) level
{
    return [self levelFrom: self.HP];
}

#pragma mark - Internal support functions for the composite values

- (NSInteger) findStat:  (DnDBStatID) stat
               inBlock: (NSArray<DnDBStat*>*) statBlock
{
    NSInteger   value    =   0;
    
    for (DnDBStat* aStat in statBlock)
    {
        if (aStat.id_entification == stat)
        {
            value = aStat.value.integerValue;
            break;
        }
    }
    
    return value;
}

- (NSInteger) rawStat: (DnDBStatID) stat
{
    NSInteger   rawStat =   [self findStat: stat
                                   inBlock: self.character.stats];
    
    return rawStat;
}

- (NSInteger) adjustedStat: (DnDBStatID) stat
{
    NSInteger adjustedStat  =   [self rawStat: stat];
                            +   [self findStat: stat inBlock: self.character.bonusStats];
                            +   [self findStat: stat inBlock: self.character.overrideStats];
    
    return adjustedStat;
}

#pragma mark - Sheet composite values

- (NSInteger) STR
{
    return [self adjustedStat: DnDBStat_STR];
}

- (BOOL) STRSaves
{
#warning TO DO
    return NO;
}

- (NSInteger) DEX
{
    return [self adjustedStat: DnDBStat_DEX];
}

- (BOOL) DEXSaves
{
#warning TO DO
    return NO;
}

- (NSInteger) CON
{
    return [self adjustedStat: DnDBStat_CON];
}

- (BOOL) CONSaves
{
#warning TO DO
    return NO;
}

- (NSInteger) INT
{
    return [self adjustedStat: DnDBStat_INT];
}

- (BOOL) INTSaves
{
#warning TO DO
    return NO;
}

- (NSInteger) WIZ
{
    return [self adjustedStat: DnDBStat_WIZ];
}

- (BOOL) WIZSaves
{
#warning TO DO
    return NO;
}

- (NSInteger) CHA
{
    return [self adjustedStat: DnDBStat_CHA];
}

- (BOOL) CHASaves
{
#warning TO DO
    return NO;
}

- (NSInteger) LVL
{
    return [self levelFrom: self.character.currentXp.integerValue + self.character.adjustmentXp.integerValue];
}

- (NSInteger) HP
{
    return  self.character.overrideHitPoints.integerValue
    ?:      self.character.baseHitPoints.integerValue
            + self.character.bonusHitPoints.integerValue
            - self.character.removedHitPoints.integerValue;
}

- (NSInteger) TempHP
{
    return self.character.temporaryHitPoints.integerValue;
}

- (NSInteger) HITS;   //Hit dices size for each new leve
{
    //self.character.class...
#warning TO DO
    return 0;
}

- (NSInteger) Speed
{
#warning TO DO
    return 0;
}

- (NSInteger) AC
{
    NSInteger   base =  self.rawAC;
    
#warning TO DO
    
    return base;
}

- (NSInteger) passiveIntelligenceAdjust
{
#warning TO DO
    return 0;
}

- (NSInteger) passizeWinzdomAdjust
{
#warning TO DO
    return 0;
}

- (SkillLevel) skillLevel_Acrobatic
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Animal
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Arcana
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Athletic
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Deception
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_History
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Insight
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Intimidation
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Investigation
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Medecine
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Nature
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Perception
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Performance
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Persuasion
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Religion
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_SleightOfHand
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Stealth
{
#warning TO DO
    return none;
}

- (SkillLevel) skillLevel_Survival
{
#warning TO DO
    return none;
}

#pragma mark - Game Computed Stats

- (NSInteger) stat: (NSInteger) stat
{
    if (stat)
    {
        stat = (stat / 2) - 5;
    }
    
    return stat;
}

- (NSInteger) STR_mod
{
    return [self stat: self.STR];
}

- (NSInteger) STR_save
{
    return self.STR_mod + (self.STRSaves * self.prof);
}

- (NSInteger) DEX_mod
{
    return [self stat: self.DEX];
}

- (NSInteger) DEX_save
{
    return self.DEX_mod + (self.DEXSaves * self.prof);
}

- (NSInteger) CON_mod
{
    return [self stat: self.CON];
}

- (NSInteger) CON_save
{
    return self.CON_mod + (self.CONSaves * self.prof);
}

- (NSInteger) INT_mod
{
    return [self stat: self.INT];
}

- (NSInteger) INT_save
{
    return self.INT_mod + (self.INTSaves * self.prof);
}

- (NSInteger) WIZ_mod
{
    return [self stat: self.WIZ];
}

- (NSInteger) WIZ_save
{
    return self.WIZ_mod + (self.WIZSaves * self.prof);
}

- (NSInteger) CHA_mod
{
    return [self stat: self.CHA];
}

- (NSInteger) CHA_save
{
    return self.CHA_mod + (self.CHASaves * self.prof);
}

- (NSInteger) rawAC
{
    return self.DEX_save + 10;
}

- (NSInteger) prof
{
    NSInteger   prof    =   0;
    
    if (self.LVL)
    {
        // Using division by 4 will require us to start counting from zero.
        // We then substract 1 from level, then divide,
        // then add out one back,
        // then add one because proficiencies start at 2, not 1.
        // No need to MAX(2,x)
        
        NSInteger mul   =   ((CGFloat) self.LVL - 1. ) / 4.0;
                
        prof    =  mul + 2;
    }
    
    return prof;
}

- (NSInteger) passivePerception
{
    return 10 + self.skill_Perception + self.passivePerceptionAdjust;
}

- (NSInteger) passiveIntelligence
{
    return 10 + self.skill_Investigation + self.passiveIntelligenceAdjust;
}

- (NSInteger) passiveWizdom
{
    return 10 + self.skill_Insight;
}

- (NSInteger) skill: (NSInteger) stat
              using: (SkillLevel) level
{
    CGFloat     skill   =   0;
    CGFloat     mul     =   0.;
    
    switch (level)
    {
        case none:break;
        case half:          mul =   0.5;    break;
        case proficient:    mul =   1.0;    break;
        case expertise:     mul =   2.0;    break;
    }
    
    CGFloat     prof    =   mul * self.prof;
    
    skill = stat + prof;
    
    if (skill > 0.)
    {
        skill = round(skill - 0.5);
    }
    else
    {
        skill = round(skill);
    }
    
    return skill;
}

- (NSInteger) skill_Acrobatic //DEX
{
    return [self skill: self.DEX_mod using: self.skillLevel_Acrobatic];
}

- (NSInteger) skill_Animal //WIZ
{
    return [self skill: self.WIZ_mod using: self.skillLevel_Animal];
}

- (NSInteger) skill_Arcana //INT
{
    return [self skill: self.INT_mod using: self.skillLevel_Arcana];
}

- (NSInteger) skill_Athletic //STR
{
    return [self skill: self.STR_mod using: self.skillLevel_Athletic];
}

- (NSInteger) skill_Deception //CHA
{
    return [self skill: self.CHA_mod using: self.skillLevel_Deception];
}

- (NSInteger) skill_History //INT
{
    return [self skill: self.INT_mod using: self.skillLevel_History];
}

- (NSInteger) skill_Insight //WIZ
{
    return [self skill: self.WIZ_mod using: self.skillLevel_Insight];
}

- (NSInteger) skill_Intimidation //CHA
{
    return [self skill: self.CHA_mod using: self.skillLevel_Intimidation];
}

- (NSInteger) skill_Investigation //INT
{
    return [self skill: self.INT_mod using: self.skillLevel_Investigation];
}

- (NSInteger) skill_Medecine //WIZ
{
    return [self skill: self.WIZ_mod using: self.skillLevel_Medecine];
}

- (NSInteger) skill_Nature //INT
{
    return [self skill: self.INT_mod using: self.skillLevel_Nature];
}

- (NSInteger) skill_Perception //WIZ
{
    return [self skill: self.WIZ_mod using: self.skillLevel_Perception];
}

- (NSInteger) skill_Performance //CHA
{
    return [self skill: self.CHA_mod using: self.skillLevel_Performance];
}

- (NSInteger) skill_Persuasion //CHA
{
    return [self skill: self.CHA_mod using: self.skillLevel_Persuasion];
}

- (NSInteger) skill_Religion //INT
{
    return [self skill: self.INT_mod using: self.skillLevel_Religion];
}

- (NSInteger) skill_SleightOfHand //DEX
{
    return [self skill: self.DEX_mod using: self.skillLevel_SleightOfHand];
}

- (NSInteger) skill_Stealth //DEX
{
    return [self skill: self.DEX_mod using: self.skillLevel_Stealth];
}

- (NSInteger) skill_Survival //WIZ
{
    return [self skill: self.WIZ_mod using: self.skillLevel_Survival];
}

@end
