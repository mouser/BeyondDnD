//
//  BeyondDnDSheet.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-02-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DnDBCharacter.h"

/// SkillLevel is a multiplier on your stills where; these multiplier IDs dont correspond to actual multiplication factor.
typedef enum : NSInteger {
    none,
    half,
    proficient,
    expertise
} SkillLevel;

NS_ASSUME_NONNULL_BEGIN

@interface BeyondDnDSheet : NSObject

+ (instancetype _Nullable) fromCharacterURL: (NSURL*) url;

+ (BOOL) isCharacterPage: (NSString*) urlString;

+ (NSString*) jSonPathFrom: (NSString*) characterPath;

- (BOOL) loaded;

- (NSImage*) snapshot;

- (NSInteger) level;

- (NSString*) name;

- (NSInteger) modifierFor: (NSInteger) statScore;

#pragma mark - Aviso.Character code transposed here

@property (nonatomic, readonly) NSString*       player;
@property (nonatomic, readonly) NSString*       information;
@property (nonatomic, readonly) BOOL            NPC;

@property (nonatomic, readonly) NSInteger       Init;

@property (nonatomic, readonly) NSInteger       STR;
@property (nonatomic, readonly) BOOL            STRSaves;
@property (nonatomic, readonly) NSInteger       STR_mod;
@property (nonatomic, readonly) NSInteger       STR_save;

@property (nonatomic, readonly) NSInteger       DEX;
@property (nonatomic, readonly) BOOL            DEXSaves;
@property (nonatomic, readonly) NSInteger       DEX_mod;
@property (nonatomic, readonly) NSInteger       DEX_save;

@property (nonatomic, readonly) NSInteger       CON;
@property (nonatomic, readonly) BOOL            CONSaves;
@property (nonatomic, readonly) NSInteger       CON_mod;
@property (nonatomic, readonly) NSInteger       CON_save;

@property (nonatomic, readonly) NSInteger       INT;
@property (nonatomic, readonly) BOOL            INTSaves;
@property (nonatomic, readonly) NSInteger       INT_mod;
@property (nonatomic, readonly) NSInteger       INT_save;

@property (nonatomic, readonly) NSInteger       WIZ;
@property (nonatomic, readonly) BOOL            WIZSaves;
@property (nonatomic, readonly) NSInteger       WIZ_mod;
@property (nonatomic, readonly) NSInteger       WIZ_save;

@property (nonatomic, readonly) NSInteger       CHA;
@property (nonatomic, readonly) BOOL            CHASaves;
@property (nonatomic, readonly) NSInteger       CHA_mod;
@property (nonatomic, readonly) NSInteger       CHA_save;

@property (nonatomic, readonly) NSInteger       LVL;

@property (nonatomic, readonly) NSInteger       HP;
@property (nonatomic, readonly) NSInteger       TempHP;
@property (nonatomic, readonly) NSInteger       HITS;   //Hit dices size for each new level
@property (nonatomic, readonly) NSInteger       Speed;

@property (nonatomic, readonly) NSInteger       AC;

@property (nonatomic, readonly) NSInteger       prof;

@property (nonatomic, readonly) NSInteger       passivePerceptionAdjust;
@property (nonatomic, readonly) NSInteger       passivePerception;

@property (nonatomic, readonly) NSInteger       passiveIntelligence;
@property (nonatomic, readonly) NSInteger       passiveIntelligenceAdjust;

@property (nonatomic, readonly) NSInteger       passiveWizdom;
@property (nonatomic, readonly) NSInteger       passizeWinzdomAdjust;

//  SkillLevel
@property (nonatomic, readonly) SkillLevel      skillLevel_Acrobatic;
@property (nonatomic, readonly) SkillLevel      skillLevel_Animal;
@property (nonatomic, readonly) SkillLevel      skillLevel_Arcana;
@property (nonatomic, readonly) SkillLevel      skillLevel_Athletic;
@property (nonatomic, readonly) SkillLevel      skillLevel_Deception;
@property (nonatomic, readonly) SkillLevel      skillLevel_History;
@property (nonatomic, readonly) SkillLevel      skillLevel_Insight;
@property (nonatomic, readonly) SkillLevel      skillLevel_Intimidation;
@property (nonatomic, readonly) SkillLevel      skillLevel_Investigation;
@property (nonatomic, readonly) SkillLevel      skillLevel_Medecine;
@property (nonatomic, readonly) SkillLevel      skillLevel_Nature;
@property (nonatomic, readonly) SkillLevel      skillLevel_Perception;
@property (nonatomic, readonly) SkillLevel      skillLevel_Performance;
@property (nonatomic, readonly) SkillLevel      skillLevel_Persuasion;
@property (nonatomic, readonly) SkillLevel      skillLevel_Religion;
@property (nonatomic, readonly) SkillLevel      skillLevel_SleightOfHand;
@property (nonatomic, readonly) SkillLevel      skillLevel_Stealth;
@property (nonatomic, readonly) SkillLevel      skillLevel_Survival;

@property (nonatomic, readonly) NSInteger       skill_Acrobatic;
@property (nonatomic, readonly) NSInteger       skill_Animal;
@property (nonatomic, readonly) NSInteger       skill_Arcana;
@property (nonatomic, readonly) NSInteger       skill_Athletic;
@property (nonatomic, readonly) NSInteger       skill_Deception;
@property (nonatomic, readonly) NSInteger       skill_History;
@property (nonatomic, readonly) NSInteger       skill_Insight;
@property (nonatomic, readonly) NSInteger       skill_Intimidation;
@property (nonatomic, readonly) NSInteger       skill_Investigation;
@property (nonatomic, readonly) NSInteger       skill_Medecine;
@property (nonatomic, readonly) NSInteger       skill_Nature;
@property (nonatomic, readonly) NSInteger       skill_Perception;
@property (nonatomic, readonly) NSInteger       skill_Performance;
@property (nonatomic, readonly) NSInteger       skill_Persuasion;
@property (nonatomic, readonly) NSInteger       skill_Religion;
@property (nonatomic, readonly) NSInteger       skill_SleightOfHand;
@property (nonatomic, readonly) NSInteger       skill_Stealth;
@property (nonatomic, readonly) NSInteger       skill_Survival;

@end

NS_ASSUME_NONNULL_END
