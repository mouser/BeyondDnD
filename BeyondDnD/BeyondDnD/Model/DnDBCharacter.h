//
//  DnDBCharacter.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-14.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBStat.h"
#import "DnDBCharacterOptions.h"
#import "DnDBSpells.h"
#import "DnDBCharacterClassSpells.h"
#import "DnDBCharacterPreferences.h"
#import "DnDBNotes.h"
#import "DnDBCharacterTraits.h"
#import "DnDBCharacterChoices.h"
#import "DnDBDefaultBackdrop.h"
#import "DnDBBackground.h"
#import "DnDBInventoryItem.h"
#import "DnDBClass.h"
#import "DnDBCampaign.h"
#import "DnDBModifiers.h"
#import "DnDBCurrencies.h"
#import "DnDBRace.h"
#import "DnDBThemeColor.h"
#import "DnDBCharacterValue.h"
#import "DnDBDeathSaves.h"
#import "DnDBSpellSlot.h"
#import "DnDBCharacterCustomItem.h"
#import "DnDBCharacterActions.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacter : DoJSONBase

@property (nonatomic, retain) NSNumber*                             id_entification;
@property (nonatomic, retain) NSString*                             readonlyUrl;
@property (nonatomic, retain) NSString*                             avatarUrl;
@property (nonatomic, retain) NSString*                             frameAvatarUrl;
@property (nonatomic, retain) NSString*                             backdropAvatarUrl;
@property (nonatomic, retain) NSString*                             smallBackdropAvatarUrl;
@property (nonatomic, retain) NSString*                             largeBackdropAvatarUrl;
@property (nonatomic, retain) NSString*                             thumbnailBackdropAvatarUrl;
@property (nonatomic, retain) DnDBDefaultBackdrop*                  defaultBackdrop;
@property (nonatomic, retain) NSNumber*                             avatarId;
@property (nonatomic, retain) NSString*                             frameAvatarId;
@property (nonatomic, retain) NSString*                             backdropAvatarId;
@property (nonatomic, retain) NSString*                             smallBackdropAvatarId;
@property (nonatomic, retain) NSString*                             largeBackdropAvatarId;
@property (nonatomic, retain) NSString*                             thumbnailAvatarId;
@property (nonatomic, retain) NSNumber*                             themeColorId;
@property (nonatomic, retain) NSString*                             lifestyle;
@property (nonatomic, retain) NSArray<DnDBInventoryItem*>*          inventory;
@property (nonatomic, retain) NSArray<DnDBStat*>*                   stats;
@property (nonatomic, retain) NSArray<DnDBStat*>*                   bonusStats;
@property (nonatomic, retain) NSArray<DnDBStat*>*                   overrideStats;
@property (nonatomic, retain) DnDBRace*                             race;
@property (nonatomic, retain) DnDBThemeColor*                       themeColor;
@property (nonatomic, retain) DnDBNotes*                            notes;
@property (nonatomic, retain) DnDBCharacterTraits*                  traits;
@property (nonatomic, retain) DnDBCharacterPreferences*             preferences;
@property (nonatomic, retain) DnDBCurrencies*                       currencies;
@property (nonatomic, retain) NSArray<DnDBClass*>*                  classes;
@property (nonatomic, retain) NSArray*                              feats;
@property (nonatomic, retain) NSArray*                              customDefenseAdjustments;
@property (nonatomic, retain) NSArray*                              customSenses;
@property (nonatomic, retain) NSArray*                              customSpeeds;
@property (nonatomic, retain) NSArray*                              customProficiencies;
@property (nonatomic, retain) NSArray*                              spellDefenses;
@property (nonatomic, retain) NSArray*                              customActions;
@property (nonatomic, retain) NSArray*                              conditions;
@property (nonatomic, retain) NSArray<DnDBCharacterValue*>*         characterValues;
@property (nonatomic, retain) DnDBDeathSaves*                       deathSaves;
@property (nonatomic, retain) NSNumber*                             adjustmentXp;
@property (nonatomic, retain) NSArray<DnDBSpellSlot*>*              spellSlots;
@property (nonatomic, retain) NSArray<DnDBSpellSlot*>*              pactMagic;
@property (nonatomic, retain) NSArray<NSNumber*>*                   activeSourceCategories;
@property (nonatomic, retain) DnDBSpells*                           spells;
@property (nonatomic, retain) DnDBCharacterOptions*                 options;

@property (nonatomic, retain) DnDBCharacterChoices*                 choices;

@property (nonatomic, retain) DnDBCharacterActions*                 actions;

@property (nonatomic, retain) NSArray<DnDBCharacterClassSpells*>*   classSpells;
@property (nonatomic, retain) NSString*                             name;
@property (nonatomic, retain) NSString*                             socialName;
@property (nonatomic, retain) NSString*                             gender;
@property (nonatomic, retain) NSString*                             faith;
@property (nonatomic, retain) NSNumber*                             age;
@property (nonatomic, retain) NSString*                             hair;
@property (nonatomic, retain) NSString*                             eyes;
@property (nonatomic, retain) NSString*                             skin;
@property (nonatomic, retain) NSString*                             height;
@property (nonatomic, retain) NSNumber*                             weight;
@property (nonatomic, retain) NSValue*                              inspiration;
@property (nonatomic, retain) NSNumber*                             baseHitPoints;
@property (nonatomic, retain) NSNumber*                             bonusHitPoints;
@property (nonatomic, retain) NSString*                             overrideHitPoints;
@property (nonatomic, retain) NSNumber*                             removedHitPoints;
@property (nonatomic, retain) NSNumber*                             temporaryHitPoints;
@property (nonatomic, retain) NSNumber*                             currentXp;
@property (nonatomic, retain) NSNumber*                             alignmentId;
@property (nonatomic, retain) NSNumber*                             lifestyleId;
@property (nonatomic, retain) NSArray<DnDBCharacterCustomItem*>*    customItems;
@property (nonatomic, retain) DnDBCampaign*                         campaign;
@property (nonatomic, retain) NSArray*                              creatures;
@property (nonatomic, retain) NSArray*                              vehicles;
@property (nonatomic, retain) NSArray*                              components;
@property (nonatomic, retain) DnDBModifiers*                        modifiers;
@property (nonatomic, retain) DnDBBackground*                       background;

@end

NS_ASSUME_NONNULL_END
 
