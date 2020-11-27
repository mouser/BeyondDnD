//
//  DnDBModifiers.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBModifier.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBModifiers : DoJSONBase

@property (nonatomic, retain) NSArray<DnDBModifier*>*       race;
@property (nonatomic, retain) NSArray<DnDBModifier*>*       dClass;
@property (nonatomic, retain) NSArray<DnDBModifier*>*       background;
@property (nonatomic, retain) NSArray<DnDBModifier*>*       item;
@property (nonatomic, retain) NSArray<NSString*>*           feat;
@property (nonatomic, retain) NSArray<NSString*>*           condition;

- (NSArray<DnDBModifier*>*) combinedModifiers;

@end

NS_ASSUME_NONNULL_END
