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

- (NSString*)       player;
- (NSString*)       information;
- (BOOL)            NPC;
- (NSInteger)       Init;

- (NSInteger)       STR;
- (BOOL)            STRSaves;
- (NSInteger)       STR_mod;
- (NSInteger)       STR_save;

- (NSInteger)       DEX;
- (BOOL)            DEXSaves;
- (NSInteger)       DEX_mod;
- (NSInteger)       DEX_save;

- (NSInteger)       CON;
- (BOOL)            CONSaves;
- (NSInteger)       CON_mod;
- (NSInteger)       CON_save;

- (NSInteger)       INT;
- (BOOL)            INTSaves;
- (NSInteger)       INT_mod;
- (NSInteger)       INT_save;

- (NSInteger)       WIZ;
- (BOOL)            WIZSaves;
- (NSInteger)       WIZ_mod;
- (NSInteger)       WIZ_save;

- (NSInteger)       CHA;
- (BOOL)            CHASaves;
- (NSInteger)       CHA_mod;
- (NSInteger)       CHA_save;

- (NSInteger)       LVL;
- (NSInteger)       HP;
- (NSInteger)       TempHP;
- (NSInteger)       HITS;   //Hit dices size for each new level
- (NSInteger)       Speed;
- (NSInteger)       AC;
- (NSInteger)       prof;

- (NSInteger)       passivePerceptionAdjust;
- (NSInteger)       passivePerception;
- (NSInteger)       passiveIntelligence;
- (NSInteger)       passiveIntelligenceAdjust;
- (NSInteger)       passiveWizdom;
- (NSInteger)       passizeWinzdomAdjust;

- (SkillLevel)      skillLevel_Acrobatic;
- (SkillLevel)      skillLevel_Animal;
- (SkillLevel)      skillLevel_Arcana;
- (SkillLevel)      skillLevel_Athletic;
- (SkillLevel)      skillLevel_Deception;
- (SkillLevel)      skillLevel_History;
- (SkillLevel)      skillLevel_Insight;
- (SkillLevel)      skillLevel_Intimidation;
- (SkillLevel)      skillLevel_Investigation;
- (SkillLevel)      skillLevel_Medecine;
- (SkillLevel)      skillLevel_Nature;
- (SkillLevel)      skillLevel_Perception;
- (SkillLevel)      skillLevel_Performance;
- (SkillLevel)      skillLevel_Persuasion;
- (SkillLevel)      skillLevel_Religion;
- (SkillLevel)      skillLevel_SleightOfHand;
- (SkillLevel)      skillLevel_Stealth;
- (SkillLevel)      skillLevel_Survival;

- (NSInteger)       skill_Acrobatic;
- (NSInteger)       skill_Animal;
- (NSInteger)       skill_Arcana;
- (NSInteger)       skill_Athletic;
- (NSInteger)       skill_Deception;
- (NSInteger)       skill_History;
- (NSInteger)       skill_Insight;
- (NSInteger)       skill_Intimidation;
- (NSInteger)       skill_Investigation;
- (NSInteger)       skill_Medecine;
- (NSInteger)       skill_Nature;
- (NSInteger)       skill_Perception;
- (NSInteger)       skill_Performance;
- (NSInteger)       skill_Persuasion;
- (NSInteger)       skill_Religion;
- (NSInteger)       skill_SleightOfHand;
- (NSInteger)       skill_Stealth;
- (NSInteger)       skill_Survival;

@end

NS_ASSUME_NONNULL_END
