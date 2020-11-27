//
//  BeyondDnDSheet.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-02-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "BeyondDnDSheet.h"
@import Cocoa;

#pragma mark - internal structure values

#define kDnDB_initiative        @"initiative"
#define kDnDB_advantage         @"advantage"

#pragma mark - Web Access URLs
#define kDNDB_CharacterPrefix   @"https://www.dndbeyond.com/character"
#define kDNDB_CharactersPage    @"https://www.dndbeyond.com/characters/"
#define kDNDB_SingleCharacter   @"https://www.dndbeyond.com/character/"
#define kDNDB_JSON_path         @"json"

#pragma mark - Private class info

@interface BeyondDnDSheet()

@property (nonatomic, retain) DnDBCharacter*            character;

@property (nonatomic, retain) NSImage*                  cashedSnapshot;

@end

@implementation BeyondDnDSheet

#pragma mark - Instiantiation

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

- (NSString*) information
{
    return self.character.description;
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
        }
        else
        {
            //nothing to see; trash self & return nil
            self = nil;
        }
    }
    
    return self;
}

#pragma mark - Utilities

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
    return [urlString hasPrefix: kDNDB_CharacterPrefix];
}

- (BOOL) loaded
{
    return self.character != nil;
}

- (NSImage*) snapshot
{
    if (!_cashedSnapshot)
    {
        NSString*   urlString =   [self currentProxy].avatarUrl;
        
        if (urlString.length)
        {
            _cashedSnapshot = [[NSImage alloc] initWithContentsOfURL: [NSURL URLWithString: urlString]];
        }
    }
    
    return self.cashedSnapshot;
}

- (NSInteger) level
{
    return [self levelFrom: self.HP];
}

- (NSString*) name
{
    return self.character.name;
}

- (DnDBCharacterProxy*) currentProxy
{
    DnDBCharacterProxy*     result          =   nil;
    NSNumber*               characterId     =   self.character.id_entification;

    for (DnDBCharacterProxy* aProxy in self.character.campaign.characters)
    {
        if ([aProxy.characterId isEqualToNumber: characterId])
        {
            result = aProxy;
            break;
        }
    }
    
    return result;
}

- (NSString*) player
{
    DnDBCharacterProxy* proxy       =   [self currentProxy];
    
    return proxy.username ?: @"";
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
    NSInteger adjustedStat  =   [self rawStat: stat]
                            +   [self findStat: stat inBlock: self.character.bonusStats]
                            +   [self findStat: stat inBlock: self.character.overrideStats];//should this overwrite all info or supplement it??
    
    return adjustedStat;
}

#pragma mark - Sheet composite values

- (BOOL) savesOn: (DnDBStatID) stat
{
    BOOL    saves   =   NO;
    
#warning TO DO find where this is hidden
    
    return saves;
}

- (NSInteger) STR
{
    return [self adjustedStat: DnDBStat_STR];
}

- (BOOL) STRSaves
{
    return [self savesOn: DnDBStat_STR];
}

- (NSInteger) DEX
{
    return [self adjustedStat: DnDBStat_DEX];
}

- (BOOL) DEXSaves
{
    return [self savesOn: DnDBStat_DEX];
}

- (NSInteger) CON
{
    return [self adjustedStat: DnDBStat_CON];
}

- (BOOL) CONSaves
{
    return [self savesOn: DnDBStat_CON];
}

- (NSInteger) INT
{
    return [self adjustedStat: DnDBStat_INT];
}

- (BOOL) INTSaves
{
    return [self savesOn: DnDBStat_INT];
}

- (NSInteger) WIZ
{
    return [self adjustedStat: DnDBStat_WIZ];
}

- (BOOL) WIZSaves
{
    return [self savesOn: DnDBStat_WIZ];
}

- (NSInteger) CHA
{
    return [self adjustedStat: DnDBStat_CHA];
}

- (BOOL) CHASaves
{
    return [self savesOn: DnDBStat_CHA];
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

- (NSInteger) HITS;
{
    NSInteger   hitDie  =   0;
    
    for (DnDBClass* aClass in self.character.classes)
    {
        hitDie = MAX(hitDie, aClass.hitDiceUsed.integerValue);
    }
    
    return hitDie;
}

- (NSInteger) Speed
{
    return self.character.race.weightSpeeds.normal.walk.integerValue;
}

- (NSInteger) AC
{
    NSInteger   base =  self.rawAC;
    
#warning TO DO need to loop race subrace items and other structures for any modifiers
    
    return base;
}

- (NSInteger) initiative
{
    NSInteger   calculatedInit  =   0;
    
    for (DnDBModifier* aMod in self.character.modifiers.combinedModifiers)
    {
        if ([aMod.subType isEqualToString: kDnDB_initiative]
        &&  [aMod.type isEqualToString: kDnDB_advantage])
        {
            calculatedInit += aMod.value.integerValue ?: 0;
        }
    }

    return calculatedInit;
}

- (SkillLevel) findSkillLevel: (NSString*) skillName
{
    SkillLevel  level       =   none;
    NSString*   skillList   =   @"";//self.character.background.customBackground.featureBackground.skillProficienciesDescription;
    NSArray*    skills      =   [skillList componentsSeparatedByString: @","];

#warning TO DO there are probably other classes features that add skills
#warning TO DO still haven't found proficiency level so we consider ON|OFF for now. Could it be lurking in modifiers?
    
    //    modifiers.class[].
    //    "id": "classFeature_63_1839586",
    //    "entityId": null,
    //    "entityTypeId": null,
    //    "type": "advantage",              <---- suspect #1 maybe "level" or "skillLevel" &
    //    "subType": "initiative",          <---- suspect #2
    //    "dice": null,
    //    "restriction": "",
    //    "statId": null,
    //    "requiresAttunement": false,
    //    "duration": null,
    //    "friendlyTypeName": "Advantage",
    //    "friendlySubtypeName": "Initiative",
    //    "isGranted": true,
    //    "bonusTypes": [],
    //    "value": null,
    //    "componentId": 63,
    //    "componentTypeId": 12168134
    
    if ([skills containsObject: skillName])
    {
        level = proficient;
    }
    
    return level;
}

- (NSInteger) passivePerceptionAdjust
{
#warning TO DO
    return 0;
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
    return [self findSkillLevel: kSkill_Acrobatic];
}

- (SkillLevel) skillLevel_Animal
{
    return [self findSkillLevel: kSkill_Animal];
}

- (SkillLevel) skillLevel_Arcana
{
    return [self findSkillLevel: kSkill_Arcana];
}

- (SkillLevel) skillLevel_Athletic
{
    return [self findSkillLevel: kSkill_Athletic];
}

- (SkillLevel) skillLevel_Deception
{
    return [self findSkillLevel: kSkill_Deception];
}

- (SkillLevel) skillLevel_History
{
    return [self findSkillLevel: kSkill_History];
}

- (SkillLevel) skillLevel_Insight
{
    return [self findSkillLevel: kSkill_Insight];
}

- (SkillLevel) skillLevel_Intimidation
{
    return [self findSkillLevel: kSkill_Intimidation];
}

- (SkillLevel) skillLevel_Investigation
{
    return [self findSkillLevel: kSkill_Investigation];
}

- (SkillLevel) skillLevel_Medecine
{
    return [self findSkillLevel: kSkill_Medecine];
}

- (SkillLevel) skillLevel_Nature
{
    return [self findSkillLevel: kSkill_Nature];
}

- (SkillLevel) skillLevel_Perception
{
    return [self findSkillLevel: kSkill_Perception];
}

- (SkillLevel) skillLevel_Performance
{
    return [self findSkillLevel: kSkill_Performance];
}

- (SkillLevel) skillLevel_Persuasion
{
    return [self findSkillLevel: kSkill_Persuasion];
}

- (SkillLevel) skillLevel_Religion
{
    return [self findSkillLevel: kSkill_Religion];
}

- (SkillLevel) skillLevel_SleightOfHand
{
    return [self findSkillLevel: kSkill_SleightOfHand];
}

- (SkillLevel) skillLevel_Stealth
{
    return [self findSkillLevel: kSkill_Stealth];
}

- (SkillLevel) skillLevel_Survival
{
    return [self findSkillLevel: kSkill_Survival];
}

#pragma mark - Game Computed Stats

- (NSInteger) modifierFor: (NSInteger) statScore
{
    if (statScore)
    {
        statScore = (statScore / 2) - 5;
    }
    
    return statScore;
}

- (NSInteger) STR_mod
{
    return [self modifierFor: self.STR];
}

- (NSInteger) STR_save
{
    return self.STR_mod + (self.STRSaves * self.prof);
}

- (NSInteger) DEX_mod
{
    return [self modifierFor: self.DEX];
}

- (NSInteger) DEX_save
{
    return self.DEX_mod + (self.DEXSaves * self.prof);
}

- (NSInteger) CON_mod
{
    return [self modifierFor: self.CON];
}

- (NSInteger) CON_save
{
    return self.CON_mod + (self.CONSaves * self.prof);
}

- (NSInteger) INT_mod
{
    return [self modifierFor: self.INT];
}

- (NSInteger) INT_save
{
    return self.INT_mod + (self.INTSaves * self.prof);
}

- (NSInteger) WIZ_mod
{
    return [self modifierFor: self.WIZ];
}

- (NSInteger) WIZ_save
{
    return self.WIZ_mod + (self.WIZSaves * self.prof);
}

- (NSInteger) CHA_mod
{
    return [self modifierFor: self.CHA];
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
