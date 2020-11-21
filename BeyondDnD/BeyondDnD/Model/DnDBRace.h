//
//  DnDBRace.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

#warning TODO

/*
 "race": {
   "entityRaceId": 4,
   "entityRaceTypeId": 1228963568,
   "fullName": "Mountain Dwarf",
   "baseRaceId": 13,
   "baseRaceTypeId": 1743923279,
   "description": "<p>Bold and hardy, dwarves are known as skilled warriors, miners, and workers of stone and metal.</p>\n<p class=\"characters-statblock\" style=\"font-family: Roboto Condensed\"><strong>Racial Traits</strong><br>+2 Constitution, Darkvision, Dwarven Resilience, Dwarven Combat Training, Stonecunning</p><p class=\"Core-Styles_Core-Body\">As a mountain dwarf, you’re strong and hardy, accustomed to a difficult life in rugged terrain. You’re probably on the tall side (for a dwarf), and tend toward lighter coloration. The shield dwarves of northern Faerûn, as well as the ruling Hylar clan and the noble Daewar clan of Dragonlance, are moun<span class=\"No-Break\">tain dwarves.</span></p>",
   "avatarUrl": null,
   "largeAvatarUrl": null,
   "portraitAvatarUrl": "https://media-waterdeep.cursecdn.com/avatars/9/364/636327456390157492.jpeg",
   "moreDetailsUrl": "/races/dwarf#MountainDwarf",
   "isHomebrew": false,
   "sourceIds": [
     1,
     2
   ],
   "groupIds": [
     6
   ],
   "type": 2,
   "subRaceShortName": "Mountain",
   "baseName": "Dwarf",
   "racialTraits": [
     {
       "definition": {
         "id": 68,
         "entityTypeId": 1960452172,
         "displayOrder": 1,
         "name": "Ability Score Increase",
         "description": "<p>Your Constitution score in<span class=\"No-Break\">creases by 2.</span></p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 114,
         "entityTypeId": 1960452172,
         "displayOrder": 2,
         "name": "Age",
         "description": "<p>Dwarves mature at the same rate as humans, but they’re considered young until they reach the age of 50. On average, they live about 350 years.</p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 115,
         "entityTypeId": 1960452172,
         "displayOrder": 3,
         "name": "Alignment",
         "description": "<p>Most dwarves are lawful, believing firmly in the benefits of a well-ordered society. They tend toward good as well, with a strong sense of fair play and a belief that everyone deserves to share in the benefits of a just order.</p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 116,
         "entityTypeId": 1960452172,
         "displayOrder": 4,
         "name": "Size",
         "description": "<p>Dwarves stand between 4 and 5 feet tall and average about 150 pounds. Your size is Medium.</p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 117,
         "entityTypeId": 1960452172,
         "displayOrder": 5,
         "name": "Speed",
         "description": "<p>Your base walking speed is 25 feet. Your speed is not reduced by wearing heavy armor.</p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 6,
         "entityTypeId": 1960452172,
         "displayOrder": 6,
         "name": "Darkvision",
         "description": "<p>Accustomed to life underground, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray.</p>",
         "snippet": "You can see in darkness (shades of gray) up to 60 ft.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 7,
         "entityTypeId": 1960452172,
         "displayOrder": 7,
         "name": "Dwarven Resilience",
         "description": "<p>You have advantage on saving throws against poison, and you have resistance against poison damage (explained in the “<span style=\"color: rgba(71, 209, 140, 1)\"><a style=\"color: rgba(71, 209, 140, 1)\" href=\"https://www.dndbeyond.com/compendium/rules/basic-rules/combat#DamageTypes\">Combat</a></span>” section).</p>",
         "snippet": "You have advantage on saves against poison and resistance against poison damage.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 8,
         "entityTypeId": 1960452172,
         "displayOrder": 8,
         "name": "Dwarven Combat Training",
         "description": "<p>You have proficiency with the battleaxe, handaxe, light hammer, and warhammer.</p>",
         "snippet": "You have proficiency with the battleaxe, handaxe, light hammer, and warhammer.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 9,
         "entityTypeId": 1960452172,
         "displayOrder": 9,
         "name": "Tool Proficiency",
         "description": "<p>You gain proficiency with the artisan’s tools of your choice: smith’s tools, brewer’s supplies, or mason’s tools.</p>",
         "snippet": "You gain proficiency with your choice of smith’s tools, brewer’s supplies, or mason’s tools.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 10,
         "entityTypeId": 1960452172,
         "displayOrder": 10,
         "name": "Stonecunning",
         "description": "<p>Whenever you make an Intelligence (History) check related to the origin of stonework, you are considered proficient in the History skill and add double your proficiency bonus to the check, instead of your normal proficiency bonus.</p>",
         "snippet": "Whenever you make an Intelligence (History) check related to the origin of stonework, you are considered proficient in the History skill and add double your proficiency bonus to the check.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 84,
         "entityTypeId": 1960452172,
         "displayOrder": 11,
         "name": "Languages",
         "description": "<p>You can speak, read, and write Common and Dwarvish. Dwarvish is full of hard consonants and guttural sounds, and those characteristics spill over into whatever other language a dwarf might speak.</p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 70,
         "entityTypeId": 1960452172,
         "displayOrder": 100,
         "name": "Ability Score Increase",
         "description": "<p>Your Strength score in<span class=\"No-Break\">creases by 2.</span></p>",
         "snippet": null,
         "hideInBuilder": true,
         "hideInSheet": true,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     },
     {
       "definition": {
         "id": 71,
         "entityTypeId": 1960452172,
         "displayOrder": 200,
         "name": "Dwarven Armor Training",
         "description": "<p>You have proficiency with light and <span class=\"No-Break\">medium armor.</span></p>",
         "snippet": "You have proficiency with light and medium armor.",
         "hideInBuilder": false,
         "hideInSheet": false,
         "activation": {
           "activationTime": null,
           "activationType": null
         },
         "sourceId": 2,
         "sourcePageNumber": 20,
         "creatureRules": []
       }
     }
   ],
   "weightSpeeds": {
     "normal": {
       "walk": 25,
       "fly": 0,
       "burrow": 0,
       "swim": 0,
       "climb": 0
     },
     "encumbered": null,
     "heavilyEncumbered": null,
     "pushDragLift": null,
     "override": null
   },
   "featIds": [],
   "size": "Medium",
   "sizeId": 4
 },
*/
@interface DnDBRace : DoJSONBase

@end

NS_ASSUME_NONNULL_END
