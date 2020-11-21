//
//  DnDBCharacterCustomItem.h
//  Aviso
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@class DnDBCharacterCustomItem;
@interface DnDBCharacterCustomItem : DoJSONBase

@property (nonatomic, retain) NSNumber*         id_entification;
@property (nonatomic, retain) NSNumber*         name;
@property (nonatomic, retain) NSNumber*         desc;
@property (nonatomic, retain) NSNumber*         weight;
@property (nonatomic, retain) NSNumber*         cost;
@property (nonatomic, retain) NSNumber*         quantity;
@property (nonatomic, retain) NSNumber*         notes;

+ (NSArray<DnDBCharacterCustomItem*>*) itemsFrom: (NSArray<NSDictionary*>*) jSon;

@end

NS_ASSUME_NONNULL_END
