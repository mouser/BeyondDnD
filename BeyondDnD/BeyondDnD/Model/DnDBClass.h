//
//  DnDBClass.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@class DnDBClass;

@interface DnDBClass : DoJSONBase

@property (nonatomic, retain) NSNumber*         id_entification;
@property (nonatomic, retain) NSNumber*         entityTypeId;
@property (nonatomic, retain) NSNumber*         level;
@property (nonatomic, retain) NSNumber*         isStartingClass;
@property (nonatomic, retain) NSNumber*         hitDiceUsed;


#warning TODO

/*
 Class class.deinitions.classes array not to be confused with character.actions.class array
 
 "classes": [
   {
     "definition": {
       "id": 9,
       "name": "Barbarian",
       "description": "<p>A fierce warrior of primitive background who can enter a battle rage</p>\n<p class=\"characters-statblock\" style=\"font-family: Roboto Condensed; font-size: 14px\"><strong>Hit Die:</strong> d12<br><strong>Primary Ability:</strong> Strength<br><strong>Saves:</strong> Strength &amp; Constitution&nbsp;</p>",
       "equipmentDescription": "<p class=\"compendium-hr\">You start with the following equipment, in addition to the equipment granted by your background:</p>\n<ul>\n<li class=\"Core-Styles_Core-Bulleted\">(<span class=\"Serif-Character-Style_Italic-Serif\">a</span>) a greataxe or (<span class=\"Serif-Character-Style_Italic-Serif\">b</span>) any martial melee weapon</li>\n<li class=\"Core-Styles_Core-Bulleted\">(<span class=\"Serif-Character-Style_Italic-Serif\">a</span>) two handaxe;handaxes or (<span class=\"Serif-Character-Style_Italic-Serif\">b</span>) any simple weapon</li>\n<li class=\"Core-Styles_Core-Bulleted\">An explorer'’'s pack;explorer’s pack and four javelin;javelins</li>\n</ul>",
       "parentClassId": null,
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/6/341/315/315/636272680339582512.png",
       "largeAvatarUrl": "https://media-waterdeep.cursecdn.com/avatars/6/342/636272680339895080.png",
       "portraitAvatarUrl": "https://media-waterdeep.cursecdn.com/avatars/10/0/636336416778392507.jpeg",
       "moreDetailsUrl": "/classes/barbarian",
       "spellCastingAbilityId": null,
       "sourceIds": [
         1
       ],
       "hitDice": 12,
       "classFeatures": [
         {
           "id": 530,
           "name": "Hit Points",
           "prerequisite": null,
           "description": "<p><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Dice:</span></strong> 1d12 per barbarian level<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Points at 1st Level:</span></strong> 12 + your Constitution modifier<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Points at Higher Levels:</span></strong> 1d12 (or 7) + your Constitution modifier per barbarian level after 1st</p>",
           "requiredLevel": 1,
           "displayOrder": 1
         },
       ],
       "wealthDice": {
         "diceCount": 2,
         "diceValue": 4,
         "diceMultiplier": 10,
         "fixedValue": null,
         "diceString": "2d4"
       },
       "canCastSpells": false,
       "knowsAllSpells": null,
       "spellPrepareType": null,
       "spellContainerName": null,
       "sourceId": 1,
       "sourcePageNumber": 46,
       "primaryAbilities": [
         1
       ],
       "spellRules": {
         "multiClassSpellSlotDivisor": 3,
         "multiClassSpellSlotRounding": 1,
         "isRitualSpellCaster": false,
         "levelCantripsKnownMaxes": [
           0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3
         ],
         "levelSpellKnownMaxes": [
           0, 0, 0, 3, 4, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10, 11, 11, 11, 12, 13
         ],
         "levelSpellSlots": [
           [
                0, 0, 0, 0, 0, 0, 0, 0, 0
           ],
           [
                0, 0, 0, 0, 0, 0, 0, 0, 0
           ],
           [
                0, 0, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             2, 0, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             3, 0, 0, 0,  0, 0,  0, 0, 0
           ],
           [
             3, 0, 0, 0, 0, 0, 0, 0, 0 ],
           [
             3, 0, 0, 0, 0, 0, 0, 0, 0 ],
           [
             4, 2, 0, 0, 0, 0, 0, 0, 0 ],
           [
             4, 2, 0, 0, 0, 0, 0, 0, 0 ],
           [
             4, 2, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 0, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 2, 0, 0, 0, 0, 0, 0
           ],
           [
             4,  3,  2,  0,  0,  0,  0,  0, 0
           ],
           [
             4, 3, 2, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 3, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 3, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3, 3, 0, 0, 0, 0, 0, 0
           ],
           [
             4, 3,  3, 1, 0, 0, 0,  0, 0
           ],
           [
             4,  3, 3, 1, 0,  0, 0, 0, 0
           ]
         ]
       },
       "prerequisites": [
         {
           "description": "Strength 13",
           "prerequisiteMappings": [
             {
               "id": 10366,
               "entityId": 1,
               "entityTypeId": 1472902489,
               "type": "ability-score",
               "subType": "strength",
               "value": 13,
               "friendlyTypeName": "Ability Score",
               "friendlySubTypeName": "Strength"
             }
           ]
         }
       ]
     },
     "subclassDefinition": {
       "id": 91,
       "name": "Path of the Ancestral Guardian",
       "description": "<p>Barbarians who draw on their ancestral guardians can better fight to protect their tribes and their allies. In order to cement ties to their ancestral guardians, barbarians who follow this path cover themselves in elaborate tattoos that celebrate their ancestors’ deeds. These tattoos tell sagas of victories against terrible monsters and other fearsome rivals.</p>",
       "equipmentDescription": null,
       "parentClassId": 9,
       "avatarUrl": null,
       "largeAvatarUrl": null,
       "portraitAvatarUrl": null,
       "moreDetailsUrl": "/classes/barbarian#PathoftheAncestralGuardian",
       "spellCastingAbilityId": 5,
       "sourceIds": [
         27
       ],
       "hitDice": 12,
       "classFeatures": [
         {
           "id": 636,
           "name": "Ancestral Protectors",
           "prerequisite": null,
           "description": "<p>Starting when you choose this path at 3rd level, spectral warriors appear when you enter your rage. While you’re raging, the first creature you hit with an attack on your turn becomes the target of the warriors, which hinder its attacks. Until the start of your next turn, that target has disadvantage on any attack roll that isn’t against you, and when the target hits a creature other than you with an attack, that creature has resistance to the damage dealt by the attack. The effect on the target ends early if your rage ends.</p>",
           "requiredLevel": 3,
           "displayOrder": 1
         },
       ],
       "wealthDice": null,
       "canCastSpells": false,
       "knowsAllSpells": null,
       "spellPrepareType": null,
       "spellContainerName": null,
       "sourceId": 27,
       "sourcePageNumber": 9,
       "primaryAbilities": [],
       "spellRules": null,
       "prerequisites": null
     },
     "classFeatures": [
       {
         "definition": {
           "id": 530,
           "entityTypeId": 12168134,
           "displayOrder": 1,
           "name": "Hit Points",
           "description": "<p><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Dice:</span></strong> 1d12 per barbarian level<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Points at 1st Level:</span></strong> 12 + your Constitution modifier<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Hit Points at Higher Levels:</span></strong> 1d12 (or 7) + your Constitution modifier per barbarian level after 1st</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 1,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 47,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 459,
           "entityTypeId": 12168134,
           "displayOrder": 2,
           "name": "Proficiencies",
           "description": "<p><strong><span class=\"Serif-Character-Style_Bold-Serif\">Armor:</span></strong> Light armor, medium armor, shields<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Weapons:</span></strong> Simple weapons, martial weapons<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Tools:</span></strong> None<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Saving Throws:</span></strong> Strength, Constitution<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Skills: </span></strong>Choose two from Animal Handling, Athletics, Intimidation, Nature, Perception, and Survival</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "<p><strong><span class=\"Serif-Character-Style_Bold-Serif\">Armor:</span></strong> Shields<br><strong><span class=\"Serif-Character-Style_Bold-Serif\">Weapons:</span></strong> Simple weapons, martial weapons</p>",
           "requiredLevel": 1,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": true,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 47,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 51,
           "entityTypeId": 12168134,
           "displayOrder": 3,
           "name": "Rage",
           "description": "<p class=\"compendium-hr\">In battle, you fight with primal ferocity. On your turn, you can enter a rage as a bonus action.</p>\n<p class=\"Core-Styles_Core-Body-Last--to-apply-extra-space-\">While raging, you gain the following benefits if you aren’t wearing heavy armor:</p>\n<ul>\n<li class=\"Core-Styles_Core-Bulleted\">You have advantage on Strength checks and Strength saving throws.</li>\n<li class=\"Core-Styles_Core-Bulleted\">When you make a melee weapon attack using Strength, you gain a bonus to the damage roll that increases as you gain levels as a barbarian, as shown in the Rage Damage column of the Barbarian table.</li>\n<li class=\"Core-Styles_Core-Bulleted-Last\">You have resistance to bludgeoning, piercing, and slashing damage.</li>\n</ul>\n<p class=\"Core-Styles_Core-Body\">If you are able to cast spells, you can’t cast them or concentrate on them while raging.</p>\n<p class=\"Core-Styles_Core-Body\">Your rage lasts for 1 minute. It ends early if you are knocked unconscious or if your turn ends and you haven’t attacked a hostile creature since your last turn or taken damage since then. You can also end your rage on your turn as a bonus action.</p>\n<p class=\"Core-Styles_Core-Body\">Once you have raged the number of times shown for your barbarian level in the Rages column of the Barbarian table, you must finish a long rest before you can rage again.</p>",
           "snippet": "As a bonus action enter a rage for up to 1 minute (10 rounds). \n\nYou gain advantage on STR checks and saving throws (not attacks), {{scalevalue#signed}} melee damage with STR weapons, resistance to bludgeoning, piercing, slashing damage. You can't cast or concentrate on spells while raging.\n\nYour rage ends early if you are knocked unconscious or if your turn ends and you haven’t attacked a hostile creature since your last turn or taken damage since then. You can also end your rage as a bonus action.",
           "activation": {
             "activationTime": 1,
             "activationType": 3
           },
           "multiClassDescription": "",
           "requiredLevel": 1,
           "isSubClassFeature": false,
           "limitedUse": [
             {
               "level": 1,
               "uses": 2
             },
             {
               "level": 3,
               "uses": 3
             },
             {
               "level": 6,
               "uses": 4
             },
             {
               "level": 12,
               "uses": 5
             },
             {
               "level": 17,
               "uses": 6
             }
           ],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 48,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": {
           "id": 28,
           "level": 16,
           "description": "Damage +4",
           "dice": null,
           "fixedValue": 4
         }
       },
       {
         "definition": {
           "id": 637,
           "entityTypeId": 12168134,
           "displayOrder": 200,
           "name": "Spirit Shield",
           "description": "<p class=\"Core-Styles_Core-Body\">Beginning at 6th level, the guardian spirits that aid you can provide supernatural protection to those you defend. If you are raging and another creature you can see within 30 feet of you takes damage, you can use your reaction to reduce that damage by 2d6.</p>\n<p class=\"Core-Styles_Core-Body\">When you reach certain levels in this class, you can reduce the damage by more: by 3d6 at 10th level and by 4d6 at 14th level.</p>",
           "snippet": "If you are raging and another creature you can see within 30 feet of you takes damage, you can use your reaction to reduce that damage by {{scalevalue}}",
           "activation": {
             "activationTime": 1,
             "activationType": 4
           },
           "multiClassDescription": "",
           "requiredLevel": 6,
           "isSubClassFeature": true,
           "limitedUse": [
             {
               "level": null,
               "uses": 1
             }
           ],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 27,
           "sourcePageNumber": 10,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": {
           "id": 59677,
           "level": 14,
           "description": "4d6 dmg reduction",
           "dice": {
             "diceCount": 4,
             "diceValue": 6,
             "diceMultiplier": null,
             "fixedValue": null,
             "diceString": "4d6"
           },
           "fixedValue": null
         }
       },
       {
         "definition": {
           "id": 63,
           "entityTypeId": 12168134,
           "displayOrder": 11,
           "name": "Feral Instinct",
           "description": "<p><span style=\"font-weight: 400\">By 7th level, your instincts are so honed that you have advantage on initiative rolls.</span></p>\n<p><span style=\"font-weight: 400\">Additionally, if you are surprised at the beginning of combat and aren’t incapacitated, you can act normally on your first turn, but only if you enter your rage before doing anything else on that turn.</span></p>",
           "snippet": "You have advantage on initiative rolls. Also, if you are surprised at the beginning of combat but not incapacitated, you can act normally on your first turn if you enter a rage before doing anything else.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 7,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 57,
           "entityTypeId": 12168134,
           "displayOrder": 12,
           "name": "Ability Score Improvement",
           "description": "<p>When you reach 8th level, and again at 12th, 16th, and 19th level, you can increase one ability score of your choice by 2, or you can increase two ability scores of your choice by 1. As normal, you can’t increase an ability score above 20 using this feature.</p>\n<p>Using the optional feats rule, you can forgo taking this feature to take a feat of your choice instead.</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 8,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 64,
           "entityTypeId": 12168134,
           "displayOrder": 13,
           "name": "Brutal Critical",
           "description": "<p><span style=\"font-weight: 400\">Beginning at 9th level, you can roll one additional weapon damage die when determining the extra damage for a critical hit with a melee attack.</span></p>\n<p><span style=\"font-weight: 400\">This increases to two additional dice at 13th level and three additional dice at 17th level.</span></p>",
           "snippet": "You can roll one additional weapon damage die when determining the extra damage for a critical hit with a melee attack.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 9,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 638,
           "entityTypeId": 12168134,
           "displayOrder": 300,
           "name": "Consult the Spirits",
           "description": "<p class=\"Core-Styles_Core-Body\">At 10th level, you gain the ability to consult with your ancestral spirits. When you do so, you cast the&nbsp;<em><span class=\"Serif-Character-Style_Italic-Serif\">augury</span></em><span class=\"Serif-Character-Style_Italic-Serif\"></span><em>&nbsp;</em>or&nbsp;<span class=\"Serif-Character-Style_Italic-Serif\"><em>clairvoyance</em></span>&nbsp;spell, without using a spell slot or material components. Rather than creating a spherical sensor, this use of&nbsp;<span class=\"Serif-Character-Style_Italic-Serif\"><em>clairvoyance</em></span>&nbsp;invisibly summons one of your ancestral spirits to the chosen location. Wisdom is your spellcasting ability for these spells.</p>\n<p class=\"Core-Styles_Core-Body\">After you cast either spell in this way, you can’t use this feature again until you finish a short or long rest.</p>",
           "snippet": "Once per short rest, you can cast either augury or clairvoyance, without using a spell slot or material components. WIS is your spellcasting ability for these spells.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 10,
           "isSubClassFeature": true,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 27,
           "sourcePageNumber": 10,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 67,
           "entityTypeId": 12168134,
           "displayOrder": 14,
           "name": "Relentless Rage",
           "description": "<p><span style=\"font-weight: 400\">Starting at 11th level, your rage can keep you fighting despite grievous wounds. If you drop to 0 hit points while you’re raging and don’t die outright, you can make a DC 10 Constitution saving throw. If you succeed, you drop to 1 hit point instead.</span></p>\n<p><span style=\"font-weight: 400\">Each time you use this feature after the first, the DC increases by 5. When you finish a short or long rest, the DC resets to 10.</span></p>",
           "snippet": "If you drop to 0 hit points while you’re raging and don’t die, you can make a DC 10 CON saving throw. If you succeed, you drop to 1 hit point instead. \n\nThe DC increase by 5 each time you use this after the first, resetting to 10 after a short or long rest.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 11,
           "isSubClassFeature": false,
           "limitedUse": [
             {
               "level": null,
               "uses": 1
             }
           ],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 58,
           "entityTypeId": 12168134,
           "displayOrder": 15,
           "name": "Ability Score Improvement",
           "description": "<p>When you reach 12th level, and again at 16th and 19th level, you can increase one ability score of your choice by 2, or you can increase two ability scores of your choice by 1. As normal, you can’t increase an ability score above 20 using this feature.</p>\n<p>Using the optional feats rule, you can forgo taking this feature to take a feat of your choice instead.</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 12,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 65,
           "entityTypeId": 12168134,
           "displayOrder": 16,
           "name": "Brutal Critical",
           "description": "<p>At 13th level, you can roll two additional weapon damage dice when determining the extra damage for a critical hit with a melee attack.</p>\n<p>This increases to three additional dice at 17th level.</p>",
           "snippet": "You can roll two additional weapon damage dice when determining the extra damage for a critical hit with a melee attack.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 13,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 639,
           "entityTypeId": 12168134,
           "displayOrder": 400,
           "name": "Vengeful Ancestors",
           "description": "<p>At 14th level, your ancestral spirits grow powerful enough to retaliate. When you use your Spirit Shield to reduce the damage of an attack, the attacker takes an amount of force damage equal to the damage that your Spirit Shield prevents.</p>",
           "snippet": "When you use your Spirit Shield to reduce the damage of an attack, the attacker takes an amount of force damage equal to the damage that your Spirit Shield prevents.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 14,
           "isSubClassFeature": true,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 27,
           "sourcePageNumber": 10,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 68,
           "entityTypeId": 12168134,
           "displayOrder": 17,
           "name": "Persistent Rage",
           "description": "<p><span style=\"font-weight: 400\">Beginning at 15th level, your rage is so fierce that it ends early only if you fall unconscious or if you choose to end it.</span></p>",
           "snippet": "Your rage ends early only if you fall unconscious or if you choose to end it.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 15,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 59,
           "entityTypeId": 12168134,
           "displayOrder": 18,
           "name": "Ability Score Improvement",
           "description": "<p>When you reach 16th level, and again at 19th level, you can increase one ability score of your choice by 2, or you can increase two ability scores of your choice by 1. As normal, you can’t increase an ability score above 20 using this feature.</p>\n<p>Using the optional feats rule, you can forgo taking this feature to take a feat of your choice instead.</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 16,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 66,
           "entityTypeId": 12168134,
           "displayOrder": 19,
           "name": "Brutal Critical",
           "description": "<p>At 17th level, you can roll three additional weapon damage dice when determining the extra damage for a critical hit with a melee attack.</p>",
           "snippet": "You can roll three additional weapon damage dice when determining the extra damage for a critical hit with a melee attack.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 17,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 69,
           "entityTypeId": 12168134,
           "displayOrder": 20,
           "name": "Indomitable Might",
           "description": "<p><span style=\"font-weight: 400\">Beginning at 18th level, if your total for a Strength check is less than your Strength score, you can use that score in place of the total.</span></p>",
           "snippet": "If your total for a Strength check is less than your Strength score, you can use that score in place of the total.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 18,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 60,
           "entityTypeId": 12168134,
           "displayOrder": 21,
           "name": "Ability Score Improvement",
           "description": "<p>When you reach 19th level, you can increase one ability score of your choice by 2, or you can increase two ability scores of your choice by 1. As normal, you can’t increase an ability score above 20 using this feature.</p>\n<p>Using the optional feats rule, you can forgo taking this feature to take a feat of your choice instead.</p>",
           "snippet": "",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 19,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       },
       {
         "definition": {
           "id": 70,
           "entityTypeId": 12168134,
           "displayOrder": 22,
           "name": "Primal Champion",
           "description": "<p><span style=\"font-weight: 400\">At 20th level, you embody the power of the wilds. Your Strength and Constitution scores increase by 4. Your maximum for those scores is now 24.</span></p>",
           "snippet": "Your Strength and Constitution scores increase by 4. Your maximum for those scores is now 24.",
           "activation": {
             "activationTime": null,
             "activationType": null
           },
           "multiClassDescription": "",
           "requiredLevel": 20,
           "isSubClassFeature": false,
           "limitedUse": [],
           "hideInBuilder": false,
           "hideInSheet": false,
           "sourceId": 2,
           "sourcePageNumber": 49,
           "creatureRules": [],
           "infusionRules": []
         },
         "levelScale": null
       }
     ]
   }
 ],



 */

+ (NSArray<DnDBClass*>*) classesFrom: (NSArray*) jSon;

@end

NS_ASSUME_NONNULL_END

