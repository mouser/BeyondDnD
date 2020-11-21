//
//  DnDBInventoryItem.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBInventoryItem.h"

@implementation DnDBInventoryItem

+ (NSArray<DnDBInventoryItem*>*) inventoryFrom: (NSArray*) json
{
    NSMutableArray*     inventory   =   NSMutableArray.new;
    
    for (NSDictionary* aValueInfo in json)
    {
        DnDBInventoryItem* aValue  =   DnDBInventoryItem.new;
        
        [aValue setValuesForKeysWithDictionary: aValueInfo];
        
        [inventory addObject: aValue];
    }
    
    return inventory;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"definition"])
    {
        _definition = DnDBInventoryItemDefinition.new;
        
        [self.definition setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
    
}

@end
