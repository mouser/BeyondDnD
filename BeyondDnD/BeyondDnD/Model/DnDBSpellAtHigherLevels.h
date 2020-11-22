//
//  DnDBSpellAtHigherLevels.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellAtHigherLevels : DoJSONBase

#warning TO DO define content of these arrays; haven't seen them yet
@property (nonatomic, retain) NSObject*         scaleType;
@property (nonatomic, retain) NSArray*          higherLevelDefinitions;
@property (nonatomic, retain) NSArray*          additionalAttacks;
@property (nonatomic, retain) NSArray*          additionalTargets;
@property (nonatomic, retain) NSArray*          areaOfEffect;
@property (nonatomic, retain) NSArray*          duration;
@property (nonatomic, retain) NSArray*          creatures;
@property (nonatomic, retain) NSArray*          special;
@property (nonatomic, retain) NSArray*          points;

@end

NS_ASSUME_NONNULL_END
