//
//  DnDBWeightSpeeds.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBNormalSpeed.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBWeightSpeeds : DoJSONBase

@property (nonatomic, retain) DnDBNormalSpeed*      normal;
@property (nonatomic, retain) NSObject*             encumbered;         // TBD
@property (nonatomic, retain) NSObject*             heavilyEncumbered;  // TBD
@property (nonatomic, retain) NSObject*             pushDragLift;       // TBD
@property (nonatomic, retain) NSObject*             over_ride;          // TBD

@end

NS_ASSUME_NONNULL_END
