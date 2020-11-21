//
//  DnDBSpellSlot.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@class DnDBSpellSlot;
@interface DnDBSpellSlot : DoJSONBase

@property (nonatomic, retain) NSNumber*     level;
@property (nonatomic, retain) NSNumber*     used;
@property (nonatomic, retain) NSNumber*     available;

+ (NSArray<DnDBSpellSlot*>*) slotsFrom: (NSArray*) json;

@end

NS_ASSUME_NONNULL_END
