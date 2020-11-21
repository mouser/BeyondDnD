//
//  DnDBInventoryItem.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSonBase.h"
#import "DnDBInventoryItemDefinition.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBInventoryItem : DoJSONBase

@property (nonatomic, retain) NSNumber*                     displayAsAttack;
@property (nonatomic, retain) NSNumber*                     id_entification;
@property (nonatomic, retain) NSNumber*                     entityTypeId;
@property (nonatomic, retain) DnDBInventoryItemDefinition*  definition;
@property (nonatomic, retain) NSNumber*                     quantity;
@property (nonatomic, retain) NSNumber*                     isAttuned;
@property (nonatomic, retain) NSNumber*                     equipped;
@property (nonatomic, retain) NSNumber*                     limitedUse;

+ (NSArray<DnDBInventoryItem*>*) inventoryFrom: (NSArray*) json;

@end

NS_ASSUME_NONNULL_END
