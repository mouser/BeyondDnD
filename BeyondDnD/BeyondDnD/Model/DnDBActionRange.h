//
//  DnDBActionRange.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBActionRange : DoJSONBase

@property (nonatomic, retain) NSNumber*     range;
@property (nonatomic, retain) NSNumber*     longRange;
@property (nonatomic, retain) NSNumber*     aoeType;
@property (nonatomic, retain) NSNumber*     aoeSize;
@property (nonatomic, retain) NSNumber*     hasAoeSpecialDescription;

@end

NS_ASSUME_NONNULL_END
