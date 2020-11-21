//
//  DnDBThemeColor.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBThemeColor : DoJSONBase

@property (nonatomic, retain) NSNumber*             themeColorId;
@property (nonatomic, retain) NSString*             themeColor;
@property (nonatomic, retain) NSString*             backgroundColor;
@property (nonatomic, retain) NSString*             name;
@property (nonatomic, retain) NSNumber*             raceId;
@property (nonatomic, retain) NSNumber*             subRaceId;
@property (nonatomic, retain) NSNumber*             classId;
@property (nonatomic, retain) NSArray<NSString*>*   tags;

@end

NS_ASSUME_NONNULL_END
