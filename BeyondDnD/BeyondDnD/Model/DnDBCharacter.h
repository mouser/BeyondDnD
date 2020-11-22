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


#warning TO DO
/*
   
   "actions": {
     "race": [],
     "class": [
       {
         "id": 1009,
         "entityTypeId": 222216831,
         "limitedUse": {
           "name": null,
           "statModifierUsesId": null,
           "resetType": 2,
           "numberUsed": 1,
           "minNumberConsumed": 1,
           "maxNumberConsumed": 1,
           "maxUses": 6,
           "operator": 1
         },
         "name": "Rage",
         "description": "<p class=\"compendium-hr\">In battle, you fight with primal ferocity. On your turn, you can enter a rage as a&nbsp;<span class=\"No-Break\">bonus action.</span></p>\n<p class=\"Core-Styles_Core-Body-Last--to-apply-extra-space-\">While raging, you gain the following benefits if you aren’t wearing heavy armor:</p>\n<ul>\n<li class=\"Core-Styles_Core-Bulleted\">You have advantage on Strength checks and Strength saving throws.</li>\n<li class=\"Core-Styles_Core-Bulleted\">When you make a melee weapon attack using Strength, you gain a bonus to the damage roll that increases as you gain levels as a barbarian, as shown in the Rage Damage column of the Barbarian table.</li>\n<li class=\"Core-Styles_Core-Bulleted-Last\">You have resistance to bludgeoning, piercing, and slashing damage.</li>\n</ul>\n<p class=\"Core-Styles_Core-Body\">If you are able to cast spells, you can’t cast them or concentrate on them&nbsp;<span class=\"No-Break\">while raging.</span></p>\n<p class=\"Core-Styles_Core-Body\">Your rage lasts for 1 minute. It ends early if you are knocked unconscious or if your turn ends and you haven’t attacked a hostile creature since your last turn or taken damage since then. You can also end your rage on your turn as a&nbsp;<span class=\"No-Break\">bonus action.</span></p>\n<p class=\"Core-Styles_Core-Body\">Once you have raged the number of times shown for your barbarian level in the Rages column of the Barbarian table, you must finish a long rest before you ca<span class=\"No-Break\">n rage again.</span></p>",
         "snippet": "As a bonus action enter a rage for up to 1 minute (10 rounds). \n\nYou gain advantage on STR checks and saving throws (not attacks), {{scalevalue#signed}} melee damage with STR weapons, resistance to bludgeoning, piercing, slashing damage. You can't cast or concentrate on spells while raging.\n\nYour rage ends early if you are knocked unconscious or if your turn ends and you haven’t attacked a hostile creature since your last turn or taken damage since then. You can also end your rage as a bonus action.",
         "abilityModifierStatId": null,
         "onMissDescription": "",
         "saveFailDescription": "",
         "saveSuccessDescription": "",
         "saveStatId": null,
         "fixedSaveDc": null,
         "attackTypeRange": null,
         "actionType": 3,
         "attackSubtype": null,
         "dice": null,
         "value": null,
         "damageTypeId": null,
         "isMartialArts": false,
         "isProficient": false,
         "spellRangeType": null,
         "displayAsAttack": null,
         "range": {
           "range": null,
           "longRange": null,
           "aoeType": null,
           "aoeSize": null,
           "hasAoeSpecialDescription": false
         },
         "activation": {
           "activationTime": 1,
           "activationType": 3
         },
         "attackCustomData": {
           "name": null,
           "notes": null,
           "damageBonus": null,
           "toHitBonus": null,
           "toHit": null,
           "isOffhand": null,
           "isSilver": null,
           "isAdamantine": null,
           "isProficient": null,
           "saveDcBonus": null,
           "saveDc": null,
           "weight": null,
           "displayAsAttack": null,
           "cost": null
         },
         "componentId": 51,
         "componentTypeId": 12168134
       },
       {
         "id": 1010,
         "entityTypeId": 222216831,
         "limitedUse": null,
         "name": "Relentless Rage",
         "description": null,
         "snippet": "If you drop to 0 hit points while you’re raging and don’t die, you can make a DC 10 CON saving throw. If you succeed, you drop to 1 hit point instead. \n\nThe DC increase by 5 each time you use this after the first, resetting to 10 after a short or long rest.",
         "abilityModifierStatId": null,
         "onMissDescription": null,
         "saveFailDescription": null,
         "saveSuccessDescription": null,
         "saveStatId": null,
         "fixedSaveDc": null,
         "attackTypeRange": null,
         "actionType": 3,
         "attackSubtype": null,
         "dice": null,
         "value": null,
         "damageTypeId": null,
         "isMartialArts": false,
         "isProficient": false,
         "spellRangeType": null,
         "displayAsAttack": null,
         "range": {
           "range": null,
           "longRange": null,
           "aoeType": null,
           "aoeSize": null,
           "hasAoeSpecialDescription": false
         },
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "attackCustomData": {
           "name": null,
           "notes": null,
           "damageBonus": null,
           "toHitBonus": null,
           "toHit": null,
           "isOffhand": null,
           "isSilver": null,
           "isAdamantine": null,
           "isProficient": null,
           "saveDcBonus": null,
           "saveDc": null,
           "weight": null,
           "displayAsAttack": null,
           "cost": null
         },
         "componentId": 67,
         "componentTypeId": 12168134
       },
       {
         "id": 53459,
         "entityTypeId": 222216831,
         "limitedUse": null,
         "name": "Spirit Shield",
         "description": "",
         "snippet": "If you are raging and another creature you can see within 30 feet of you takes damage, you can use your reaction to reduce that damage by {{scalevalue}}",
         "abilityModifierStatId": null,
         "onMissDescription": "",
         "saveFailDescription": "",
         "saveSuccessDescription": "",
         "saveStatId": null,
         "fixedSaveDc": null,
         "attackTypeRange": null,
         "actionType": 3,
         "attackSubtype": null,
         "dice": null,
         "value": null,
         "damageTypeId": null,
         "isMartialArts": false,
         "isProficient": false,
         "spellRangeType": null,
         "displayAsAttack": null,
         "range": {
           "range": null,
           "longRange": null,
           "aoeType": null,
           "aoeSize": null,
           "hasAoeSpecialDescription": false
         },
         "activation": {
           "activationTime": 1,
           "activationType": 4
         },
         "attackCustomData": {
           "name": null,
           "notes": null,
           "damageBonus": null,
           "toHitBonus": null,
           "toHit": null,
           "isOffhand": null,
           "isSilver": null,
           "isAdamantine": null,
           "isProficient": null,
           "saveDcBonus": null,
           "saveDc": null,
           "weight": null,
           "displayAsAttack": null,
           "cost": null
         },
         "componentId": 637,
         "componentTypeId": 12168134
       }
     ],
     "feat": []
   },
 }

 */

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
