//
//  DnDBRacialTraits.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBRacialTrait.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBRacialTraits : DoJSONBase

//This is a bit wonky. Race.racialTrais is defined as an array of structures
//whose only property, definitions, is a DnDBRacialTrait.
@property (nonatomic, retain) DnDBRacialTrait*      definitions;

+ (NSArray<DnDBRacialTraits*>*) racialTraitsFrom: (NSArray<NSDictionary*>*) info;

@end

NS_ASSUME_NONNULL_END
