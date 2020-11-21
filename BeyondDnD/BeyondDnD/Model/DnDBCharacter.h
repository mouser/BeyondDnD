//
//  DnDBCharacter.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-14.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBStat.h"
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

@property (nonatomic, retain) NSNumber*                             id_enditifaction;
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

//@property (nonatomic, retain) NSDictionary*                         notes;          // TBD
//@property (nonatomic, retain) NSDictionary*                         traits;         // TBD
//@property (nonatomic, retain) NSDictionary*                         preferences;    // TBD

/*
   
   "notes": {
     "allies": null,
     "personalPossessions": "chaine  de domination",
     "otherHoldings": null,
     "organizations": null,
     "enemies": null,
     "backstory": null,
     "otherNotes": "Date : 25 du mois du poisson\n\n\nVille Div Nada\n\n\n\n\n10 chataignes\n\n\n\nMorale  +1\n\n\nÉpée de cyrano\n\n\nLiving wick de Picollo\n\n\nChaine de dominiation peut dominer un enemie at will lorsque on en la chaine au tours du cou de la créature.\n\n\n"
   },
   "traits": {
     "personalityTraits": "I don’t pay attention to the risks in a situation. Never tell me the odds.\nI am incredibly slow to trust. Those who seem the fairest often have the most to hide.",
     "ideals": "People. I’m loyal to my friends, not to any ideals, and everyone else can take a trip down the Styx for all I care. (Neutral)",
     "bonds": "\n\nSomeone I loved died because of a mistake I made. That will never happen again.",
     "flaws": "\n\nIf there’s a plan, I’ll forget it. If I don’t forget it, I’ll ignore it.",
     "appearance": null
   },
   "preferences": {
     "useHomebrewContent": true,
     "progressionType": 2,
     "encumbranceType": 1,
     "ignoreCoinWeight": true,
     "hitPointType": 1,
     "showUnarmedStrike": true,
     "showCompanions": false,
     "showWildShape": false,
     "primarySense": 5,
     "primaryMovement": 1,
     "privacyType": 3,
     "sharingType": 2,
     "abilityScoreDisplayType": 1,
     "enforceFeatRules": true,
     "enforceMulticlassRules": true
   }
 */

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

/*
   "spells": {
     "race": [],
     "class": [
       {
         "overrideSaveDc": null,
         "limitedUse": {
           "name": null,
           "statModifierUsesId": null,
           "resetType": 1,
           "numberUsed": 0,
           "minNumberConsumed": null,
           "maxNumberConsumed": 0,
           "maxUses": 1,
           "operator": null
         },
         "id": 72184,
         "entityTypeId": 420821570,
         "definition": {
           "id": 2007,
           "name": "Augury",
           "level": 2,
           "school": "Divination",
           "duration": {
             "durationInterval": 0,
             "durationUnit": null,
             "durationType": "Instantaneous"
           },
           "activation": {
             "activationTime": 1,
             "activationType": 6
           },
           "range": {
             "origin": "Self",
             "rangeValue": 0,
             "aoeType": null,
             "aoeValue": null
           },
           "asPartOfWeaponAttack": false,
           "description": "<p>By casting gem-inlaid sticks, rolling dragon bones, laying out ornate cards, or employing some other divining tool, you receive an omen from an otherworldly entity about the results of a specific course of action that you plan to take within the next 30 minutes. The DM chooses from the following possible omens:</p>\n<ul>\n<li><strong>Weal</strong>, for good results</li>\n<li><strong>Woe</strong>, for bad results</li>\n<li><strong>Weal and woe</strong>, for both good and bad results</li>\n<li><strong>Nothing</strong>, for results that aren't especially good or bad</li>\n</ul>\n<p><br>The spell doesn't take into account any possible circumstances that might change the outcome, such as the casting of additional spells or the loss or gain of a companion.</p>\n<p>If you cast the spell two or more times before completing your next long rest, there is a cumulative 25 percent chance for each casting after the first that you get a random reading. The DM makes this roll in secret.</p>",
           "snippet": "",
           "concentration": false,
           "ritual": true,
           "rangeArea": null,
           "damageEffect": null,
           "components": [
             1,
             2,
             3
           ],
           "componentsDescription": "specially marked sticks, bones, or similar tokens worth at least 25 gp",
           "saveDcAbilityId": null,
           "healing": null,
           "healingDice": null,
           "tempHpDice": null,
           "attackType": null,
           "canCastAtHigherLevel": false,
           "isHomebrew": false,
           "version": null,
           "sourceId": 2,
           "sourcePageNumber": 215,
           "requiresSavingThrow": false,
           "requiresAttackRoll": false,
           "atHigherLevels": {
             "scaleType": null,
             "higherLevelDefinitions": [],
             "additionalAttacks": [],
             "additionalTargets": [],
             "areaOfEffect": [],
             "duration": [],
             "creatures": [],
             "special": [],
             "points": []
           },
           "modifiers": [],
           "conditions": [],
           "tags": [
             "Foreknowledge"
           ],
           "castingTimeDescription": ""
         },
         "prepared": null,
         "countsAsKnownSpell": false,
         "usesSpellSlot": false,
         "castAtLevel": null,
         "alwaysPrepared": null,
         "restriction": "invisibly summons one of your ancestral spirits",
         "spellCastingAbilityId": 5,
         "displayAsAttack": null,
         "additionalDescription": "",
         "castOnlyAsRitual": false,
         "ritualCastingType": null,
         "range": {
           "origin": "Self",
           "rangeValue": 0,
           "aoeType": null,
           "aoeValue": null
         },
         "activation": {
           "activationTime": 1,
           "activationType": 6
         },
         "baseLevelAtWill": false,
         "atWillLimitedUseLevel": null,
         "componentId": 638,
         "componentTypeId": 12168134
       },
       {
         "overrideSaveDc": null,
         "limitedUse": {
           "name": null,
           "statModifierUsesId": null,
           "resetType": 1,
           "numberUsed": 0,
           "minNumberConsumed": null,
           "maxNumberConsumed": 0,
           "maxUses": 1,
           "operator": null
         },
         "id": 72206,
         "entityTypeId": 420821570,
         "definition": {
           "id": 2028,
           "name": "Clairvoyance",
           "level": 3,
           "school": "Divination",
           "duration": {
             "durationInterval": 10,
             "durationUnit": "Minute",
             "durationType": "Concentration"
           },
           "activation": {
             "activationTime": 10,
             "activationType": 6
           },
           "range": {
             "origin": "Ranged",
             "rangeValue": 5280,
             "aoeType": null,
             "aoeValue": null
           },
           "asPartOfWeaponAttack": false,
           "description": "<p>You create an invisible sensor within range in a location familiar to you (a place you have visited or seen before) or in an obvious location that is unfamiliar to you (such as behind a door, around a corner, or in a grove of trees). The sensor remains in place for the duration, and it can't be attacked or otherwise interacted with.</p>\n<p>When you cast the spell, you choose seeing or hearing. You can use the chosen sense through the sensor as if you were in its space. As your action, you can switch between seeing and hearing.</p>\n<p>A creature that can see the sensor (such as a creature benefiting from <strong>see invisibility</strong> or truesight) sees a luminous, intangible orb about the size of your fist.</p>",
           "snippet": "",
           "concentration": true,
           "ritual": false,
           "rangeArea": null,
           "damageEffect": null,
           "components": [
             1,
             2,
             3
           ],
           "componentsDescription": "a focus worth at least 100 gp, either a jeweled horn for hearing or a glass eye for seeing",
           "saveDcAbilityId": null,
           "healing": null,
           "healingDice": null,
           "tempHpDice": null,
           "attackType": null,
           "canCastAtHigherLevel": false,
           "isHomebrew": false,
           "version": null,
           "sourceId": 2,
           "sourcePageNumber": 222,
           "requiresSavingThrow": false,
           "requiresAttackRoll": false,
           "atHigherLevels": {
             "scaleType": null,
             "higherLevelDefinitions": [],
             "additionalAttacks": [],
             "additionalTargets": [],
             "areaOfEffect": [],
             "duration": [],
             "creatures": [],
             "special": [],
             "points": []
           },
           "modifiers": [],
           "conditions": [],
           "tags": [
             "Scrying",
             "Detection",
             "Utility"
           ],
           "castingTimeDescription": ""
         },
         "prepared": null,
         "countsAsKnownSpell": false,
         "usesSpellSlot": false,
         "castAtLevel": null,
         "alwaysPrepared": null,
         "restriction": "invisibly summons one of your ancestral spirits",
         "spellCastingAbilityId": 5,
         "displayAsAttack": null,
         "additionalDescription": "",
         "castOnlyAsRitual": false,
         "ritualCastingType": null,
         "range": {
           "origin": "Ranged",
           "rangeValue": 5280,
           "aoeType": null,
           "aoeValue": null
         },
         "activation": {
           "activationTime": 10,
           "activationType": 6
         },
         "baseLevelAtWill": false,
         "atWillLimitedUseLevel": null,
         "componentId": 638,
         "componentTypeId": 12168134
       }
     ],
     "item": [],
     "feat": []
   },
   "options": {
     "race": [],
     "class": [],
     "feat": []
   },
   "choices": {
     "race": [
       {
         "id": "2-1464",
         "parentChoiceId": null,
         "type": 2,
         "subType": 1,
         "optionValue": 4258,
         "label": "Choose a Dwarf Artisan's Tool",
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 4258,
             "label": "Brewer's Supplies",
             "description": null
           },
           {
             "id": 4259,
             "label": "Mason's Tools",
             "description": null
           },
           {
             "id": 4260,
             "label": "Smith's Tools",
             "description": null
           }
         ],
         "componentId": 9,
         "componentTypeId": 1960452172
       }
     ],
     "class": [
       {
         "id": "1-56",
         "parentChoiceId": null,
         "type": 1,
         "subType": null,
         "optionValue": 695,
         "label": null,
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 695,
             "label": "Ability Score Improvement",
             "description": null
           },
           {
             "id": 696,
             "label": "Feat",
             "description": null
           }
         ],
         "componentId": 56,
         "componentTypeId": 12168134
       },
     ],
     "background": [
       {
         "id": "2-8482361",
         "parentChoiceId": null,
         "type": 2,
         "subType": 3,
         "optionValue": 4066,
         "label": "Choose a Language",
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 4045,
             "label": "Abyssal",
             "description": null
           },
           {
             "id": 4049,
             "label": "Celestial",
             "description": null
           },
           {
             "id": 4050,
             "label": "Common",
             "description": null
           },
           {
             "id": 5173,
             "label": "Daelkyr",
             "description": null
           },
           {
             "id": 4051,
             "label": "Deep Speech",
             "description": null
           },
           {
             "id": 4052,
             "label": "Draconic",
             "description": null
           },
           {
             "id": 4054,
             "label": "Dwarvish",
             "description": null
           },
           {
             "id": 4055,
             "label": "Elvish",
             "description": null
           },
           {
             "id": 4056,
             "label": "Giant",
             "description": null
           },
           {
             "id": 5064,
             "label": "Gith",
             "description": null
           },
           {
             "id": 4061,
             "label": "Gnomish",
             "description": null
           },
           {
             "id": 4062,
             "label": "Goblin",
             "description": null
           },
           {
             "id": 4063,
             "label": "Halfling",
             "description": null
           },
           {
             "id": 4065,
             "label": "Infernal",
             "description": null
           },
           {
             "id": 5110,
             "label": "Kraul",
             "description": null
           },
           {
             "id": 5206,
             "label": "Leonin",
             "description": null
           },
           {
             "id": 5109,
             "label": "Loxodon",
             "description": null
           },
           {
             "id": 5198,
             "label": "Marquesian",
             "description": null
           },
           {
             "id": 5108,
             "label": "Minotaur",
             "description": null
           },
           {
             "id": 5197,
             "label": "Naush",
             "description": null
           },
           {
             "id": 4066,
             "label": "Orc",
             "description": null
           },
           {
             "id": 4068,
             "label": "Primordial",
             "description": null
           },
           {
             "id": 5172,
             "label": "Quori",
             "description": null
           },
           {
             "id": 5174,
             "label": "Riedran",
             "description": null
           },
           {
             "id": 4071,
             "label": "Sylvan",
             "description": null
           },
           {
             "id": 4074,
             "label": "Undercommon",
             "description": null
           },
           {
             "id": 5111,
             "label": "Vedalken",
             "description": null
           },
           {
             "id": 5199,
             "label": "Zemnian",
             "description": null
           }
         ],
         "componentId": 15119231,
         "componentTypeId": 1581111423
       },
       {
         "id": "2-8482358",
         "parentChoiceId": null,
         "type": 2,
         "subType": 1,
         "optionValue": 3795,
         "label": "Choose a Skill",
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 3784,
             "label": "Acrobatics",
             "description": null
           },
           {
             "id": 3792,
             "label": "Animal Handling",
             "description": null
           },
           {
             "id": 3787,
             "label": "Arcana",
             "description": null
           },
           {
             "id": 3783,
             "label": "Athletics",
             "description": null
           },
           {
             "id": 3797,
             "label": "Deception",
             "description": null
           },
           {
             "id": 3788,
             "label": "History",
             "description": null
           },
           {
             "id": 3793,
             "label": "Insight",
             "description": null
           },
           {
             "id": 3798,
             "label": "Intimidation",
             "description": null
           },
           {
             "id": 3789,
             "label": "Investigation",
             "description": null
           },
           {
             "id": 3794,
             "label": "Medicine",
             "description": null
           },
           {
             "id": 3790,
             "label": "Nature",
             "description": null
           },
           {
             "id": 3795,
             "label": "Perception",
             "description": null
           },
           {
             "id": 3799,
             "label": "Performance",
             "description": null
           },
           {
             "id": 3800,
             "label": "Persuasion",
             "description": null
           },
           {
             "id": 3791,
             "label": "Religion",
             "description": null
           },
           {
             "id": 3785,
             "label": "Sleight of Hand",
             "description": null
           },
           {
             "id": 3786,
             "label": "Stealth",
             "description": null
           },
           {
             "id": 3796,
             "label": "Survival",
             "description": null
           }
         ],
         "componentId": 15119231,
         "componentTypeId": 1581111423
       },
       {
         "id": "2-8482359",
         "parentChoiceId": null,
         "type": 2,
         "subType": 1,
         "optionValue": 3790,
         "label": "Choose a Skill",
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 3784,
             "label": "Acrobatics",
             "description": null
           },
           {
             "id": 3792,
             "label": "Animal Handling",
             "description": null
           },
           {
             "id": 3787,
             "label": "Arcana",
             "description": null
           },
           {
             "id": 3783,
             "label": "Athletics",
             "description": null
           },
           {
             "id": 3797,
             "label": "Deception",
             "description": null
           },
           {
             "id": 3788,
             "label": "History",
             "description": null
           },
           {
             "id": 3793,
             "label": "Insight",
             "description": null
           },
           {
             "id": 3798,
             "label": "Intimidation",
             "description": null
           },
           {
             "id": 3789,
             "label": "Investigation",
             "description": null
           },
           {
             "id": 3794,
             "label": "Medicine",
             "description": null
           },
           {
             "id": 3790,
             "label": "Nature",
             "description": null
           },
           {
             "id": 3795,
             "label": "Perception",
             "description": null
           },
           {
             "id": 3799,
             "label": "Performance",
             "description": null
           },
           {
             "id": 3800,
             "label": "Persuasion",
             "description": null
           },
           {
             "id": 3791,
             "label": "Religion",
             "description": null
           },
           {
             "id": 3785,
             "label": "Sleight of Hand",
             "description": null
           },
           {
             "id": 3786,
             "label": "Stealth",
             "description": null
           },
           {
             "id": 3796,
             "label": "Survival",
             "description": null
           }
         ],
         "componentId": 15119231,
         "componentTypeId": 1581111423
       },
       {
         "id": "2-8482360",
         "parentChoiceId": null,
         "type": 2,
         "subType": 1,
         "optionValue": 3936,
         "label": "Choose a Tool",
         "isOptional": false,
         "isInfinite": false,
         "defaultSubtypes": [],
         "options": [
           {
             "id": 3930,
             "label": "Alchemist's Supplies",
             "description": null
           },
           {
             "id": 3955,
             "label": "Bagpipes",
             "description": null
           },
           {
             "id": 3931,
             "label": "Brewer's Supplies",
             "description": null
           },
           {
             "id": 3932,
             "label": "Calligrapher's Supplies",
             "description": null
           },
           {
             "id": 3933,
             "label": "Carpenter's Tools",
             "description": null
           },
           {
             "id": 3934,
             "label": "Cartographer's Tools",
             "description": null
           },
           {
             "id": 3935,
             "label": "Cobbler's Tools",
             "description": null
           },
           {
             "id": 3936,
             "label": "Cook's Utensils",
             "description": null
           },
           {
             "id": 3953,
             "label": "Dice Set",
             "description": null
           },
           {
             "id": 3947,
             "label": "Disguise Kit",
             "description": null
           },
           {
             "id": 4377,
             "label": "Dragonchess Set",
             "description": null
           },
           {
             "id": 3956,
             "label": "Drum",
             "description": null
           },
           {
             "id": 3957,
             "label": "Dulcimer",
             "description": null
           },
           {
             "id": 3958,
             "label": "Flute",
             "description": null
           },
           {
             "id": 3948,
             "label": "Forgery Kit",
             "description": null
           },
           {
             "id": 3937,
             "label": "Glassblower's Tools",
             "description": null
           },
           {
             "id": 3949,
             "label": "Herbalism Kit",
             "description": null
           },
           {
             "id": 3961,
             "label": "Horn",
             "description": null
           },
           {
             "id": 3938,
             "label": "Jeweler's Tools",
             "description": null
           },
           {
             "id": 3939,
             "label": "Leatherworker's Tools",
             "description": null
           },
           {
             "id": 3959,
             "label": "Lute",
             "description": null
           },
           {
             "id": 3960,
             "label": "Lyre",
             "description": null
           },
           {
             "id": 3940,
             "label": "Mason's Tools",
             "description": null
           },
           {
             "id": 3950,
             "label": "Navigator's Tools",
             "description": null
           },
           {
             "id": 3941,
             "label": "Painter's Supplies",
             "description": null
           },
           {
             "id": 3962,
             "label": "Pan Flute",
             "description": null
           },
           {
             "id": 3954,
             "label": "Playing Card Set",
             "description": null
           },
           {
             "id": 3951,
             "label": "Poisoner's Kit",
             "description": null
           },
           {
             "id": 3942,
             "label": "Potter's Tools",
             "description": null
           },
           {
             "id": 3963,
             "label": "Shawm",
             "description": null
           },
           {
             "id": 3943,
             "label": "Smith's Tools",
             "description": null
           },
           {
             "id": 3952,
             "label": "Thieves' Tools",
             "description": null
           },
           {
             "id": 4378,
             "label": "Three-Dragon Ante Set",
             "description": null
           },
           {
             "id": 3944,
             "label": "Tinker's Tools",
             "description": null
           },
           {
             "id": 4345,
             "label": "Vehicles (Land)",
             "description": null
           },
           {
             "id": 5080,
             "label": "Vehicles (Sea/Air)",
             "description": null
           },
           {
             "id": 4346,
             "label": "Vehicles (Water)",
             "description": null
           },
           {
             "id": 3964,
             "label": "Viol",
             "description": null
           },
           {
             "id": 3945,
             "label": "Weaver's Tools",
             "description": null
           },
           {
             "id": 3946,
             "label": "Woodcarver's Tools",
             "description": null
           }
         ],
         "componentId": 15119231,
         "componentTypeId": 1581111423
       }
     ],
     "feat": []
   },
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
   
   "classSpells": [
     {
       "entityTypeId": 1446578651,
       "characterClassId": 17926402,
       "spells": []
     }
   ],
   
 }

 */

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
