//
//  DnDBCharacterValue.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@class DnDBCharacterValue;

@interface DnDBCharacterValue : DoJSONBase

@property (nonatomic, retain) NSNumber*     typeId;
@property (nonatomic, retain) NSNumber*     value;
@property (nonatomic, retain) NSNumber*     notes;
@property (nonatomic, retain) NSNumber*     valueId;
@property (nonatomic, retain) NSNumber*     valueTypeId;
@property (nonatomic, retain) NSNumber*     contextId;
@property (nonatomic, retain) NSNumber*     contextTypeId;

+ (NSArray<DnDBCharacterValue*>*) valuesFrom: (NSArray*) jSon;

@end

NS_ASSUME_NONNULL_END
