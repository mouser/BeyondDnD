//
//  DnDBActivation.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBActivation : DoJSONBase

@property (nonatomic, retain) NSObject*     activationTime; //Type is TBD
@property (nonatomic, retain) NSObject*     activationType; //Type is TBD

@end

NS_ASSUME_NONNULL_END
