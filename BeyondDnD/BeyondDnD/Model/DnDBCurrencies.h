//
//  DnDBCurrencies.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCurrencies : DoJSONBase

@property (nonatomic, retain) NSNumber*     cp;
@property (nonatomic, retain) NSNumber*     sp;
@property (nonatomic, retain) NSNumber*     gp;
@property (nonatomic, retain) NSNumber*     ep;
@property (nonatomic, retain) NSNumber*     pp;

@end

NS_ASSUME_NONNULL_END
