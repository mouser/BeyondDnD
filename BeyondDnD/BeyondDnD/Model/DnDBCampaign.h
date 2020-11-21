//
//  DnDBCampaign.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"
#import "DnDBCharacterProxy.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCampaign : DoJSONBase

@property (nonatomic, retain) NSNumber*                     id_enditification;
@property (nonatomic, retain) NSString*                     name;
@property (nonatomic, retain) NSString*                     desc;
@property (nonatomic, retain) NSString*                     link;
@property (nonatomic, retain) NSString*                     publicNotes;
@property (nonatomic, retain) NSNumber*                     dmUserId;
@property (nonatomic, retain) NSString*                     dmUsername;

@property (nonatomic, retain) NSArray<DnDBCharacterProxy*>* characters;
/*
   "characters": [
     {
     },
     {
       "userId": 105648093,
       "username": "Philippin_deCerf",
       "characterId": 15112302,
       "characterName": "Belfegor",
       "characterUrl": "/profile/Philippin_deCerf/characters/15112302",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/17/420/150/150/636377886265995342.jpeg",
       "privacyType": 3
     },
     {
       "userId": 105648737,
       "username": "Kalanek",
       "characterId": 15119231,
       "characterName": "Ulfrick Torunn",
       "characterUrl": "/profile/Kalanek/characters/15119231",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/17/468/150/150/636377891490355427.jpeg",
       "privacyType": 3
     },
     {
       "userId": 105322722,
       "username": "Sampiq2",
       "characterId": 15122968,
       "characterName": "Émilia Delarose",
       "characterUrl": "/profile/Sampiq2/characters/15122968",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/8293/505/190/150/637140837074788686.jpeg",
       "privacyType": 3
     },
     {
       "userId": 105868793,
       "username": "Choupgbb",
       "characterId": 16549994,
       "characterName": "Kassendra",
       "characterUrl": "/profile/Choupgbb/characters/16549994",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/9588/361/176/150/637215565932419119.jpeg",
       "privacyType": 3
     },
     {
       "userId": 105027263,
       "username": "Elawen",
       "characterId": 18813563,
       "characterName": "T'risstree A'Darach",
       "characterUrl": "/profile/Elawen/characters/18813563",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/7689/670/150/212/637088667714082451.jpeg",
       "privacyType": 3
     },
     {
       "userId": 106389805,
       "username": "ALavoie",
       "characterId": 20401290,
       "characterName": "Shemov Ball",
       "characterUrl": "/profile/ALavoie/characters/20401290",
       "avatarUrl": "https://media-waterdeep.cursecdn.com/avatars/thumbnails/17/379/150/150/636377879493212911.jpeg",
       "privacyType": 3
     }
   ]
 },
 */
@end

NS_ASSUME_NONNULL_END
