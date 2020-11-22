//
//  DnDBNormalSpeed.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBNormalSpeed : DoJSONBase

@property (nonatomic, retain) NSNumber*         walk;
@property (nonatomic, retain) NSNumber*         fly;
@property (nonatomic, retain) NSNumber*         burrow;
@property (nonatomic, retain) NSNumber*         swim;
@property (nonatomic, retain) NSNumber*         climb;

@end

NS_ASSUME_NONNULL_END
