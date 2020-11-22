//
//  DnDBCharacterChoice.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBCharacterChoice.h>
#import <BeyondDnD/DnDBChoiceOptions.h>
NS_ASSUME_NONNULL_BEGIN

@class DnDBCharacterChoice;
@interface DnDBCharacterChoice : DoJSONBase

+ (NSArray<DnDBCharacterChoice*>*) choicesFrom: (NSArray*) json;

@property (nonatomic, retain) NSString*                     id_entification;
@property (nonatomic, retain) NSNumber*                     parentChoiceId;
@property (nonatomic, retain) NSNumber*                     type;
@property (nonatomic, retain) NSNumber*                     subType;
@property (nonatomic, retain) NSNumber*                     optionValue;
@property (nonatomic, retain) NSString*                     label;
@property (nonatomic, retain) NSNumber*                     isOptional;
@property (nonatomic, retain) NSNumber*                     isInfinite;
@property (nonatomic, retain) NSArray*                      defaultSubtypes;        // TBD
@property (nonatomic, retain) NSNumber*                     componentId;
@property (nonatomic, retain) NSNumber*                     componentTypeId;

@property (nonatomic, retain) NSArray<DnDBChoiceOptions*>*  options;

@end

NS_ASSUME_NONNULL_END
