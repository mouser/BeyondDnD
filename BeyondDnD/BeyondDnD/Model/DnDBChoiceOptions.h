//
//  DnDBChoiceOptions.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBChoiceOptions : DoJSONBase

+ (NSArray<DnDBChoiceOptions*>*)  optionsFrom: (NSArray*) json;

@property (nonatomic, retain) NSString*          id_entification;
@property (nonatomic, retain) NSString*          label;
@property (nonatomic, retain) NSString*          desc;

@end

NS_ASSUME_NONNULL_END
