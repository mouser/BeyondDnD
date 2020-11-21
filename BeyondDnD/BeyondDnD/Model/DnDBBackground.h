//
//  DnDBBackground.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBBackground : DoJSONBase

#warning TODO

/*
 
 "background": {
   "hasCustomBackground": true,
   "definition": null,
   "customBackground": {
     "id": 15119231,
     "entityTypeId": 1581111423,
     "name": "",
     "description": null,
     "featuresBackground": {
       "id": 29,
       "entityTypeId": 1669830167,
       "name": "Uthgardt Tribe Member",
       "description": "<p class=\"Core-Styles_Core-Body\">Though you might have only recently arrived in civilized lands, you are no stranger to the values of cooperation and group effort when striving for supremacy. You learned these principles, and much more, as a member of an Uthga<span class=\"No-Break\">rdt tribe.</span></p>\n<p class=\"Core-Styles_Core-Body\">Your people have always tried to hold to the old ways. Tradition and taboo have kept the Uthgardt strong while the kingdoms of others have collapsed into chaos and ruin. But for the last few generations, some bands among the tribes were tempted to settle, make peace, trade, and even to build towns. Perhaps this is why Uthgar chose to raise up the totems among the people as living embodiments of his power. Perhaps they needed a reminder of who they were and from whence they came. The Chosen of Uthgar led bands back to the old ways, and most of your people abandoned the soft ways of civ<span class=\"No-Break\">ilization.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<blockquote>\n<p class=\"Core-Styles_Core-Body\"><strong><span class=\"No-Break\">BARBARIAN TRIBES OF <b>FAERÛN</b></span></strong></p>\n<p class=\"Core-Styles_Core-Body\">Though this section details the Uthgardt specifically, either it or the outlander background from the <span class=\"Sans-Serif-Character-Styles_Italic-Sans-Serif\">Player’s Handbook</span> can be used for a character whose origin lies with one of the other barbarian tribes <span class=\"No-Break\">in Faerûn.</span> You might be a fair-haired barbarian of the Reghed, dwelling in the shadow of the Reghed Glacier in the far North near Icewind Dale. You might also be of the nomadic Rashemi, noted for their savage berserkers and their masked witches. Perhaps you hail from one of the wood elf tribes in the Chondalwood, or the magic-hating human tribes of the sweltering jungles<span class=\"No-Break\"> of Chult.</span></p>\n</blockquote>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<p class=\"Core-Styles_Core-Body\">You might have grown up in one of the tribes that had decided to settle down, and now that they have abandoned that path, you find yourself adrift. Or you might come from a segment of the Uthgardt that adheres to tradition, but you seek to bring glory to your tribe by achieving great things as a formidable a<span class=\"No-Break\">dventurer.</span></p>\n<p class=\"Core-Styles_Core-Body--Extra-Space-After-\">See the “<a href=\"https://www.dndbeyond.com/compendium/rules/scag/the-sword-coast-and-the-north#UthgardtLands\">Uthgardt Lands</a>” section of <a href=\"https://www.dndbeyond.com/compendium/rules/scag/the-sword-coast-and-the-north#Chapter2TheSwordCoastandtheNorth\">chapter 2</a> for details on each tribe’s territory and its activities that will help you choose your af<span class=\"No-Break\">filiation.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<p class=\"Core-Styles_Core-Hanging\"><strong><span class=\"Serif-Character-Style_Bold-Serif\">Skill Proficiencies:</span></strong>&nbsp;Athletics<span class=\"No-Break\">, Survival<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Tool Proficiencies:</span></strong> One type of musical instrument or artis<span class=\"No-Break\">an’s tools<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Languages:</span></strong> One of y<span class=\"No-Break\">our choice<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Equipment:</span></strong> A hunting trap, a totemic token or set of tattoos marking your loyalty to Uthgar and your tribal totem, a set of traveler’s clothes, and a pouch contai<span class=\"No-Break\">ning 10 gp</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<blockquote>\n<p class=\"compendium-hr\"><strong>FEATURE: UTHGARDT HERITAGE</strong></p>\n<p class=\"Core-Styles_Core-Body\">You have an excellent knowledge of not only your tribe’s territory, but also the terrain and natural resources of the rest of the North. You are familiar enough with any wilderness area that you find twice as much food and water as you normally would when you for<span class=\"No-Break\">age there.</span></p>\n<p class=\"Core-Styles_Core-Body\">Additionally, you can call upon the hospitality of your people, and those folk allied with your tribe, often including members of druid circles, tribes of nomadic elves, the Harpers, and the priesthoods devoted to the gods of the Fir<span class=\"No-Break\">st Circle.</span></p>\n</blockquote>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<h5 class=\"compendium-hr\">Suggested Characteristics</h5>\n<p class=\"Core-Styles_Core-Body\">Use the tables for the outlander background below&nbsp;as the basis for your traits and motivations, modifying the entries when appropriate to suit your identity as a member of an Uthga<span class=\"No-Break\">rdt tribe.</span></p>\n<p class=\"Core-Styles_Core-Body\">Even if you have left your tribe behind (at least for now), you hold to the traditions of your people. You will never cut down a still-living tree, and you may not countenance such an act being done in your presence. The Uthgardt ancestral mounds—great hills where the totem spirits were defeated by Uthgar and where the heroes of the tribes are interred—are sacr<span class=\"No-Break\">ed to you.</span></p>\n<p class=\"Core-Styles_Core-Body\">Your bond is undoubtedly associated with your tribe or some aspect of Uthgardt philosophy or culture (perhaps even Uthgar himself). Your ideal is a personal choice that probably hews closely to the ethos of your people and certainly doesn’t contradict or compromise what being an Uthgardt s<span class=\"No-Break\">tands for.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<h5 class=\"Core-Styles_Core-Body\"><span class=\"No-Break\">Outlander</span></h5>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d8</th>\n<th style=\"text-align: left\">Personality Trait</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>I’m driven by a wanderlust that led me away from home.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>I watch over my friends as if they were a litter of newborn pups.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I once ran twenty-five miles without stopping to warn to my clan of an approaching orc horde. I’d do it again if I had to.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I have a lesson for every situation, drawn from observing nature.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>I place no stock in wealthy or well-mannered folk. Money and manners won’t save you from a hungry owlbear.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>I’m always picking things up, absently fiddling with them, and sometimes accidentally breaking them.</td>\n</tr>\n<tr>\n<td>7</td>\n<td>I feel far more comfortable around animals than people.</td>\n</tr>\n<tr>\n<td>8</td>\n<td>I was, in fact, raised by wolves.</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Ideal</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Change.</span> Life is like the seasons, in constant change, and we must change with it. (Chaotic)</td>\n</tr>\n<tr>\n<td>2</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Greater Good.</span> It is each person’s responsibility to make the most happiness for the whole tribe. (Good)</td>\n</tr>\n<tr>\n<td>3</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Honor.</span> If I dishonor myself, I dishonor my whole clan. (Lawful)</td>\n</tr>\n<tr>\n<td>4</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Might.</span> The strongest are meant to rule. (Evil)</td>\n</tr>\n<tr>\n<td>5</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Nature.</span> The natural world is more important than all the constructs of civilization. (Neutral)</td>\n</tr>\n<tr>\n<td>6</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Glory.</span> I must earn glory in battle, for myself and my clan. (Any)</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Bond</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>My family, clan, or tribe is the most important thing in my life, even when they are far from me.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>An injury to the unspoiled wilderness of my home is an injury to me.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I will bring terrible wrath down on the evildoers who destroyed my homeland.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I am the last of my tribe, and it is up to me to ensure their names enter legend.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>I suffer awful visions of a coming disaster and will do anything to prevent it.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>It is my duty to provide children to sustain my tribe.</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Flaw</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>I am too enamored of ale, wine, and other intoxicants.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>There’s no room for caution in a life lived to the fullest.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I remember every insult I’ve received and nurse a silent resentment toward anyone who’s ever wronged me.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I am slow to trust members of other races, tribes, and societies.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>Violence is my answer to almost any challenge.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>Don’t expect me to save those who can’t save themselves. It is nature’s way that the strong thrive and the weak perish.</td>\n</tr>\n</tbody>\n</table>",
       "snippet": "",
       "shortDescription": "<p class=\"Core-Styles_Core-Body\">Though you might have only recently arrived in civilized lands, you are no stranger to the values of cooperation and group effort when striving for supremacy. You learned these principles, and much more, as a member of an Uthga<span class=\"No-Break\">rdt tribe.</span></p>\n<p class=\"Core-Styles_Core-Body\">Your people have always tried to hold to the old ways. Tradition and taboo have kept the Uthgardt strong while the kingdoms of others have collapsed into chaos and ruin. But for the last few generations, some bands among the tribes were tempted to settle, make peace, trade, and even to build towns. Perhaps this is why Uthgar chose to raise up the totems among the people as living embodiments of his power. Perhaps they needed a reminder of who they were and from whence they came. The Chosen of Uthgar led bands back to the old ways, and most of your people abandoned the soft ways of civ<span class=\"No-Break\">ilization.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<blockquote>\n<p class=\"Core-Styles_Core-Body\"><strong><span class=\"No-Break\">BARBARIAN TRIBES OF&nbsp;<b>FAERÛN</b></span></strong></p>\n<p class=\"Core-Styles_Core-Body\">Though this section details the Uthgardt specifically, either it or the outlander background from the&nbsp;<span class=\"Sans-Serif-Character-Styles_Italic-Sans-Serif\">Player’s Handbook</span>&nbsp;can be used for a character whose origin lies with one of the other barbarian tribes&nbsp;<span class=\"No-Break\">in Faerûn.</span>&nbsp;You might be a fair-haired barbarian of the Reghed, dwelling in the shadow of the Reghed Glacier in the far North near Icewind Dale. You might also be of the nomadic Rashemi, noted for their savage berserkers and their masked witches. Perhaps you hail from one of the wood elf tribes in the Chondalwood, or the magic-hating human tribes of the sweltering jungles<span class=\"No-Break\">&nbsp;of Chult.</span></p>\n</blockquote>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<p class=\"Core-Styles_Core-Body\">You might have grown up in one of the tribes that had decided to settle down, and now that they have abandoned that path, you find yourself adrift. Or you might come from a segment of the Uthgardt that adheres to tradition, but you seek to bring glory to your tribe by achieving great things as a formidable a<span class=\"No-Break\">dventurer.</span></p>\n<p class=\"Core-Styles_Core-Body--Extra-Space-After-\">See the “<a href=\"https://www.dndbeyond.com/compendium/rules/scag/the-sword-coast-and-the-north#UthgardtLands\">Uthgardt Lands</a>” section of&nbsp;<a href=\"https://www.dndbeyond.com/compendium/rules/scag/the-sword-coast-and-the-north#Chapter2TheSwordCoastandtheNorth\">chapter 2</a>&nbsp;for details on each tribe’s territory and its activities that will help you choose your af<span class=\"No-Break\">filiation.</span></p>",
       "skillProficienciesDescription": "Athletics, Survival",
       "toolProficienciesDescription": "One type of musical instrument or artisan’s tools",
       "languagesDescription": "One of your choice",
       "equipmentDescription": "A hunting trap, a totemic token or set of tattoos marking your loyalty to Uthgar and your tribal totem, a Clothes, Traveler's;set of traveler’s clothes, and a pouch containing 10 gp",
       "featureName": "Uthgardt Heritage",
       "featureDescription": "<p class=\"Core-Styles_Core-Body\">You have an excellent knowledge of not only your tribe’s territory, but also the terrain and natural resources of the rest of the North. You are familiar enough with any wilderness area that you find twice as much food and water as you normally would when you for<span class=\"No-Break\">age there.</span></p>\n<p class=\"Core-Styles_Core-Body\">Additionally, you can call upon the hospitality of your people, and those folk allied with your tribe, often including members of druid circles, tribes of nomadic elves, the Harpers, and the priesthoods devoted to the gods of the Fir<span class=\"No-Break\">st Circle.</span></p>",
       "avatarUrl": null,
       "largeAvatarUrl": null,
       "suggestedCharacteristicsDescription": "<p class=\"Core-Styles_Core-Body\">Use the tables for the outlander background below&nbsp;as the basis for your traits and motivations, modifying the entries when appropriate to suit your identity as a member of an Uthga<span class=\"No-Break\">rdt tribe.</span></p>\n<p class=\"Core-Styles_Core-Body\">Even if you have left your tribe behind (at least for now), you hold to the traditions of your people. You will never cut down a still-living tree, and you may not countenance such an act being done in your presence. The Uthgardt ancestral mounds—great hills where the totem spirits were defeated by Uthgar and where the heroes of the tribes are interred—are sacr<span class=\"No-Break\">ed to you.</span></p>\n<p class=\"Core-Styles_Core-Body\">Your bond is undoubtedly associated with your tribe or some aspect of Uthgardt philosophy or culture (perhaps even Uthgar himself). Your ideal is a personal choice that probably hews closely to the ethos of your people and certainly doesn’t contradict or compromise what being an Uthgardt s<span class=\"No-Break\">tands for.</span></p>",
       "suggestedProficiencies": [
         "Athletics",
         "Survival"
       ],
       "suggestedLanguages": [],
       "organization": null,
       "contractsDescription": "",
       "spellsPreDescription": "",
       "spellsPostDescription": "",
       "personalityTraits": [
         {
           "id": 612,
           "description": "I’m driven by a wanderlust that led me away from home.",
           "diceRoll": 1
         },
         {
           "id": 613,
           "description": "I watch over my friends as if they were a litter of newborn pups.",
           "diceRoll": 2
         },
         {
           "id": 614,
           "description": "I once ran twenty-five miles without stopping to warn to my clan of an approaching orc horde. I’d do it again if I had to.",
           "diceRoll": 3
         },
         {
           "id": 615,
           "description": "I have a lesson for every situation, drawn from observing nature.",
           "diceRoll": 4
         },
         {
           "id": 616,
           "description": "I place no stock in wealthy or well-mannered folk. Money and manners won’t save you from a hungry owlbear.",
           "diceRoll": 5
         },
         {
           "id": 617,
           "description": "I’m always picking things up, absently fiddling with them, and sometimes accidentally breaking them.",
           "diceRoll": 6
         },
         {
           "id": 618,
           "description": "I feel far more comfortable around animals than people.",
           "diceRoll": 7
         },
         {
           "id": 619,
           "description": "I was, in fact, raised by wolves.",
           "diceRoll": 8
         }
       ],
       "ideals": [
         {
           "id": 620,
           "description": "Change. Life is like the seasons, in constant change, and we must change with it. (Chaotic)",
           "diceRoll": 1
         },
         {
           "id": 621,
           "description": "Greater Good. It is each person’s responsibility to make the most happiness for the whole tribe. (Good)",
           "diceRoll": 2
         },
         {
           "id": 622,
           "description": "Honor. If I dishonor myself, I dishonor my whole clan. (Lawful)",
           "diceRoll": 3
         },
         {
           "id": 623,
           "description": "Might. The strongest are meant to rule. (Evil)",
           "diceRoll": 4
         },
         {
           "id": 624,
           "description": "Nature. The natural world is more important than all the constructs of civilization. (Neutral)",
           "diceRoll": 5
         },
         {
           "id": 625,
           "description": "Glory. I must earn glory in battle, for myself and my clan. (Any)",
           "diceRoll": 6
         }
       ],
       "bonds": [
         {
           "id": 626,
           "description": "My family, clan, or tribe is the most important thing in my life, even when they are far from me.",
           "diceRoll": 1
         },
         {
           "id": 627,
           "description": "An injury to the unspoiled wilderness of my home is an injury to me.",
           "diceRoll": 2
         },
         {
           "id": 628,
           "description": "I will bring terrible wrath down on the evildoers who destroyed my homeland.",
           "diceRoll": 3
         },
         {
           "id": 629,
           "description": "I am the last of my tribe, and it is up to me to ensure their names enter legend.",
           "diceRoll": 4
         },
         {
           "id": 630,
           "description": "I suffer awful visions of a coming disaster and will do anything to prevent it.",
           "diceRoll": 5
         },
         {
           "id": 631,
           "description": "It is my duty to provide children to sustain my tribe.",
           "diceRoll": 6
         }
       ],
       "flaws": [
         {
           "id": 632,
           "description": "I am too enamored of ale, wine, and other intoxicants.",
           "diceRoll": 1
         },
         {
           "id": 633,
           "description": "There’s no room for caution in a life lived to the fullest.",
           "diceRoll": 2
         },
         {
           "id": 634,
           "description": "I remember every insult I’ve received and nurse a silent resentment toward anyone who’s ever wronged me.",
           "diceRoll": 3
         },
         {
           "id": 635,
           "description": "I am slow to trust members of other races, tribes, and societies.",
           "diceRoll": 4
         },
         {
           "id": 636,
           "description": "Violence is my answer to almost any challenge.",
           "diceRoll": 5
         },
         {
           "id": 637,
           "description": "Don’t expect me to save those who can’t save themselves. It is nature’s way that the strong thrive and the weak perish.",
           "diceRoll": 6
         }
       ]
     },
     "characteristicsBackground": {
       "id": 16,
       "entityTypeId": 1669830167,
       "name": "Hermit",
       "description": "<p class=\"Core-Styles_Core-Body-Last--to-apply-extra-space-\">You lived in seclusion — either in a sheltered community such as a monastery, or entirely alone — for a formative part of your life. In your time apart from the clamor of society, you found quiet, solitude, and perhaps some of the answers you we<span class=\"No-Break\">re looking for.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<p class=\"Core-Styles_Core-Hanging\"><span class=\"Serif-Character-Style_Bold-Serif\"><strong>Skill Proficiencies:</strong> </span>Med<span class=\"No-Break\">icine, Religion<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Tool Proficiencies</span><span class=\"No-Break\"><span class=\"Serif-Character-Style_Bold-Serif\">:</span></span></strong><span class=\"No-Break\"> Herbalism kit<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Languages:</span></strong> One<span class=\"No-Break\"> of your choice<br></span><strong><span class=\"Serif-Character-Style_Bold-Serif\">Equipment:</span></strong> A scroll case stuffed full of notes from your studies or prayers, a winter blanket, a set of common clothes, an herbalis<span class=\"No-Break\">m kit, and 5 gp</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<h5 class=\"compendium-hr\">Life of Seclusion</h5>\n<p class=\"Core-Styles_Core-Body\">What was the reason for your isolation, and what changed to allow you to end your solitude? You can work with your DM to determine the exact nature of your seclusion, or you can choose or roll on the table below to determine the reason behind <span class=\"No-Break\">your seclusion.</span></p>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d8</th>\n<th style=\"text-align: left\">Life of Seclusion</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>I was searching for spiritual enlightenment.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>I was partaking of communal living in accordance with the dictates of a religious order.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I was exiled for a crime I didn’t commit.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I retreated from society after a life-altering event.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>I needed a quiet place to work on my art, literature, music, or manifesto.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>I needed to commune with nature, far from civilization.</td>\n</tr>\n<tr>\n<td>7</td>\n<td>I was the caretaker of an ancient ruin or relic.</td>\n</tr>\n<tr>\n<td>8</td>\n<td>I was a pilgrim in search of a person, place, or relic of spiritual significance.</td>\n</tr>\n</tbody>\n</table>\n<blockquote>\n<p class=\"compendium-hr\"><br><strong>FEATURE: DISCOVERY&nbsp;</strong></p>\n<p class=\"Core-Styles_Core-Body\">The quiet seclusion of your extended hermitage gave you access to a unique and powerful discovery. The exact nature of this revelation depends on the nature of your seclusion. It might be a great truth about the cosmos, the deities, the powerful beings of the outer planes, or the forces of nature. It could be a site that no one else has ever seen. You might have uncovered a fact that has long been forgotten, or unearthed some relic of the past that could rewrite history. It might be information that would be damaging to the people who or consigned you to exile, and hence the reason for your ret<span class=\"No-Break\">urn to society.</span></p>\n<p class=\"Core-Styles_Core-Body\">Work with your DM to determine the details of your discovery and its impact o<span class=\"No-Break\">n the campaign.</span></p>\n</blockquote>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<h5 class=\"compendium-hr\">Other Hermits</h5>\n<p class=\"Core-Styles_Core-Body\">This hermit background assumes a contemplative sort of seclusion that allows room for study and prayer. If you want to play a rugged wilderness recluse who lives off the land while shunning the company of other people, look at the <a href=\"https://www.dndbeyond.com/characters/backgrounds/outlander\">outlander</a> background. On the other hand, if you want to go in a more religious direction, the <a href=\"https://www.dndbeyond.com/characters/backgrounds/acolyte\">acolyte</a> might be what you’re looking for. Or you could even be a <a href=\"https://www.dndbeyond.com/characters/backgrounds/charlatan\">charlatan</a>, posing as a wise and holy person and letting pious foo<span class=\"No-Break\">ls support you.</span></p>\n<div class=\"line character height1 marginTop20 marginBottom20\">&nbsp;</div>\n<h5 class=\"compendium-hr\">Suggested Characteristics</h5>\n<p class=\"Core-Styles_Core-Body\">Some hermits are well suited to a life of seclusion, whereas others chafe against it and long for company. Whether they embrace solitude or long to escape it, the solitary life shapes their attitudes and ideals. A few are driven slightly mad by their years apar<span class=\"No-Break\">t from society.</span></p>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d8</th>\n<th style=\"text-align: left\">Personality Trait</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>I’ve been isolated for so long that I rarely speak, preferring gestures and the occasional grunt.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>I am utterly serene, even in the face of disaster.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>The leader of my community had something wise to say on every topic, and I am eager to share that wisdom.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I feel tremendous empathy for all who suffer.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>I’m oblivious to etiquette and social expectations.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>I connect everything that happens to me to a grand, cosmic plan.</td>\n</tr>\n<tr>\n<td>7</td>\n<td>I often get lost in my own thoughts and contemplation, becoming oblivious to my surroundings.</td>\n</tr>\n<tr>\n<td>8</td>\n<td>I am working on a grand philosophical theory and love sharing my ideas.</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Ideal</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Greater Good.</span> My gifts are meant to be shared with all, not used for my own benefit. (Good)</td>\n</tr>\n<tr>\n<td>2</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Logic. </span>Emotions must not cloud our sense of what is right and true, or our logical thinking. (Lawful)</td>\n</tr>\n<tr>\n<td>3</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Free Thinking. </span>Inquiry and curiosity are the pillars of progress. (Chaotic)</td>\n</tr>\n<tr>\n<td>4</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Power. </span>Solitude and contemplation are paths toward mystical or magical power. (Evil)</td>\n</tr>\n<tr>\n<td>5</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Live and Let Live. </span>Meddling in the affairs of others only causes trouble. (Neutral)</td>\n</tr>\n<tr>\n<td>6</td>\n<td><span class=\"Sans-Serif-Character-Styles_Bold-Sans-Serif\">Self-Knowledge. </span>If you know yourself, there’s nothing left to know. (Any)</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Bond</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>Nothing is more important than the other members of my hermitage, order, or association.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>I entered seclusion to hide from the ones who might still be hunting me. I must someday confront them.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I’m still seeking the enlightenment I pursued in my seclusion, and it still eludes me.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I entered seclusion because I loved someone I could not have.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>Should my discovery come to light, it could bring ruin to the world.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>My isolation gave me great insight into a great evil that only I can destroy.</td>\n</tr>\n</tbody>\n</table>\n<table class=\"compendium-left-aligned-table\">\n<thead>\n<tr>\n<th>d6</th>\n<th style=\"text-align: left\">Flaw</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1</td>\n<td>Now that I’ve returned to the world, I enjoy its delights a little too much.</td>\n</tr>\n<tr>\n<td>2</td>\n<td>I harbor dark, bloodthirsty thoughts that my isolation and meditation failed to quell.</td>\n</tr>\n<tr>\n<td>3</td>\n<td>I am dogmatic in my thoughts and philosophy.</td>\n</tr>\n<tr>\n<td>4</td>\n<td>I let my need to win arguments overshadow friendships and harmony.</td>\n</tr>\n<tr>\n<td>5</td>\n<td>I’d risk too much to uncover a lost bit of knowledge.</td>\n</tr>\n<tr>\n<td>6</td>\n<td>I like keeping secrets and won’t share them with anyone.</td>\n</tr>\n</tbody>\n</table>\n<p>&nbsp;</p>",
       "snippet": "",
       "shortDescription": "<p>You lived in seclusion — either in a sheltered community such as a monastery, or entirely alone — for a formative part of your life. In your time apart from the clamor of society, you found quiet, solitude, and perhaps some of the answers you we<span class=\"No-Break\">re looking for.</span></p>",
       "skillProficienciesDescription": "Medicine, Religion",
       "toolProficienciesDescription": "Herbalism kit",
       "languagesDescription": "One of your choice",
       "equipmentDescription": "A Case, Map or Scroll;scroll case stuffed full of notes from your studies or prayers, a winter blanket, a Clothes, Common;set of common clothes, an herbalism kit, and 5 gp",
       "featureName": "Discovery",
       "featureDescription": "<p class=\"Core-Styles_Core-Body\">The quiet seclusion of your extended hermitage gave you access to a unique and powerful discovery. The exact nature of this revelation depends on the nature of your seclusion. It might be a great truth about the cosmos, the deities, the powerful beings of the outer planes, or the forces of nature. It could be a site that no one else has ever seen. You might have uncovered a fact that has long been forgotten, or unearthed some relic of the past that could rewrite history. It might be information that would be damaging to the people who or consigned you to exile, and hence the reason for your ret<span class=\"No-Break\">urn to society.</span></p>\n<p class=\"Core-Styles_Core-Body\">Work with your DM to determine the details of your discovery and its impact o<span class=\"No-Break\">n the campaign.</span></p>",
       "avatarUrl": null,
       "largeAvatarUrl": null,
       "suggestedCharacteristicsDescription": "<p>Some hermits are well suited to a life of seclusion, whereas others chafe against it and long for company. Whether they embrace solitude or long to escape it, the solitary life shapes their attitudes and ideals. A few are driven slightly mad by their years apar<span class=\"No-Break\">t from society.</span></p>",
       "suggestedProficiencies": [
         "Religion",
         "Medicine"
       ],
       "suggestedLanguages": [],
       "organization": null,
       "contractsDescription": "",
       "spellsPreDescription": "",
       "spellsPostDescription": "",
       "personalityTraits": [
         {
           "id": 251,
           "description": "I’ve been isolated for so long that I rarely speak, preferring gestures and the occasional grunt.",
           "diceRoll": 1
         },
         {
           "id": 252,
           "description": "I am utterly serene, even in the face of disaster.",
           "diceRoll": 2
         },
         {
           "id": 253,
           "description": "The leader of my community had something wise to say on every topic, and I am eager to share that wisdom.",
           "diceRoll": 3
         },
         {
           "id": 254,
           "description": "I feel tremendous empathy for all who suffer.",
           "diceRoll": 4
         },
         {
           "id": 255,
           "description": "I’m oblivious to etiquette and social expectations.",
           "diceRoll": 5
         },
         {
           "id": 256,
           "description": "I connect everything that happens to me to a grand, cosmic plan.",
           "diceRoll": 6
         },
         {
           "id": 257,
           "description": "I often get lost in my own thoughts and contemplation, becoming oblivious to my surroundings.",
           "diceRoll": 7
         },
         {
           "id": 258,
           "description": "I am working on a grand philosophical theory and love sharing my ideas.",
           "diceRoll": 8
         }
       ],
       "ideals": [
         {
           "id": 259,
           "description": "Greater Good. My gifts are meant to be shared with all, not used for my own benefit. (Good)",
           "diceRoll": 1
         },
         {
           "id": 260,
           "description": "Logic. Emotions must not cloud our sense of what is right and true, or our logical thinking. (Lawful)",
           "diceRoll": 2
         },
         {
           "id": 261,
           "description": "Free Thinking. Inquiry and curiosity are the pillars of progress. (Chaotic)",
           "diceRoll": 3
         },
         {
           "id": 262,
           "description": "Power. Solitude and contemplation are paths toward mystical or magical power. (Evil)",
           "diceRoll": 4
         },
         {
           "id": 263,
           "description": "Live and Let Live. Meddling in the affairs of others only causes trouble. (Neutral)",
           "diceRoll": 5
         },
         {
           "id": 264,
           "description": "Self-Knowledge. If you know yourself, there’s nothing left to know. (Any)",
           "diceRoll": 6
         }
       ],
       "bonds": [
         {
           "id": 265,
           "description": "Nothing is more important than the other members of my hermitage, order, or association.",
           "diceRoll": 1
         },
         {
           "id": 266,
           "description": "I entered seclusion to hide from the ones who might still be hunting me. I must someday confront them.",
           "diceRoll": 2
         },
         {
           "id": 267,
           "description": "I’m still seeking the enlightenment I pursued in my seclusion, and it still eludes me.",
           "diceRoll": 3
         },
         {
           "id": 268,
           "description": "I entered seclusion because I loved someone I could not have.",
           "diceRoll": 4
         },
         {
           "id": 269,
           "description": "Should my discovery come to light, it could bring ruin to the world.",
           "diceRoll": 5
         },
         {
           "id": 270,
           "description": "My isolation gave me great insight into a great evil that only I can destroy.",
           "diceRoll": 6
         }
       ],
       "flaws": [
         {
           "id": 271,
           "description": "Now that I’ve returned to the world, I enjoy its delights a little too much.",
           "diceRoll": 1
         },
         {
           "id": 272,
           "description": "I harbor dark, bloodthirsty thoughts that my isolation and meditation failed to quell.",
           "diceRoll": 2
         },
         {
           "id": 273,
           "description": "I am dogmatic in my thoughts and philosophy.",
           "diceRoll": 3
         },
         {
           "id": 274,
           "description": "I let my need to win arguments overshadow friendships and harmony.",
           "diceRoll": 4
         },
         {
           "id": 275,
           "description": "I’d risk too much to uncover a lost bit of knowledge.",
           "diceRoll": 5
         },
         {
           "id": 276,
           "description": "I like keeping secrets and won’t share them with anyone.",
           "diceRoll": 6
         }
       ]
     },
     "backgroundType": 3
   }
 },


*/
@end

NS_ASSUME_NONNULL_END
