//
//  DnDBDeathSaves.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBDeathSaves : DoJSONBase

@property (nonatomic, retain) NSNumber*     failCount;
@property (nonatomic, retain) NSNumber*     successCount;
@property (nonatomic, retain) NSNumber*     isStabilized;

@end

NS_ASSUME_NONNULL_END
