//
//  DnDBSpellDuration.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellDuration : DoJSONBase

@property (nonatomic, retain) NSNumber*         durationInterval;
@property (nonatomic, retain) NSNumber*         durationUnit;
@property (nonatomic, retain) NSString*         durationType;

@end

NS_ASSUME_NONNULL_END
