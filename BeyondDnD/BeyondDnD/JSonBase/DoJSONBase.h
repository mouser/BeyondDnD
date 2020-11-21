//
//  DoJSONBase.h
//  DoObjects
//
//  Created by Martin-Gilles Lavoie on 2020-11-14.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DoJSONBase : NSObject

/// Values unrecognized by subclasses will be accumulated here.
@property (nonatomic, retain) NSMutableDictionary*  dojUnknownValues;

@end

NS_ASSUME_NONNULL_END
