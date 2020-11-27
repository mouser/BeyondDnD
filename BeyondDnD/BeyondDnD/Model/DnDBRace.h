//
//  DnDBRace.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBRacialTraits.h>
#import <BeyondDnD/DnDBWeightSpeeds.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBRace : DoJSONBase

@property (nonatomic, retain) NSNumber*                     entityRaceId;       // 4,
@property (nonatomic, retain) NSNumber*                     entityRaceTypeId;   // 1228963568,
@property (nonatomic, retain) NSString*                     fullName;           // "Mountain Dwarf",
@property (nonatomic, retain) NSNumber*                     baseRaceId;         // 13,
@property (nonatomic, retain) NSNumber*                     baseRaceTypeId;     // 1743923279,
@property (nonatomic, retain) NSString*                     desc;               
@property (nonatomic, retain) NSString*                     avatarUrl;          // null,
@property (nonatomic, retain) NSString*                     largeAvatarUrl;     // null,
@property (nonatomic, retain) NSString*                     portraitAvatarUrl;  // "https://media-waterdeep.cursecdn.com/avatars/9/364/636327456390157492.jpeg",
@property (nonatomic, retain) NSString*                     moreDetailsUrl;     // "/races/dwarf#MountainDwarf",
@property (nonatomic, retain) NSNumber*                     isHomebrew;         // false,
@property (nonatomic, retain) NSArray<NSNumber*>*           sourceIds;          // TBD
@property (nonatomic, retain) NSArray<NSNumber*>*           groupIds;           // TBD
@property (nonatomic, retain) NSNumber*                     type;               // 2,
@property (nonatomic, retain) NSString*                     subRaceShortName;   // "Mountain",
@property (nonatomic, retain) NSString*                     baseName;           // "Dwarf",
@property (nonatomic, retain) NSArray<DnDBRacialTraits*>*   racialTraits;
@property (nonatomic, retain) DnDBWeightSpeeds*             weightSpeeds;
@property (nonatomic, retain) NSArray<NSNumber*>*           featIds;            // [],
@property (nonatomic, retain) NSString*                     size;               // "Medium",
@property (nonatomic, retain) NSNumber*                     sizeId;             // 4

@end

NS_ASSUME_NONNULL_END
