//
//  DnDBSpellActivation.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellActivation : DoJSONBase

@property (nonatomic, retain) NSNumber*         activationTime;
@property (nonatomic, retain) NSNumber*         activationType;

@end

NS_ASSUME_NONNULL_END
