//
//  DnDBCharacterCustomItem.m
//  Aviso
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBCharacterCustomItem.h"

@implementation DnDBCharacterCustomItem

+ (NSArray<DnDBCharacterCustomItem*>*) itemsFrom: (NSArray<NSDictionary*>*) jSon
{
    NSMutableArray*     items   =   NSMutableArray.new;
    
    for (NSDictionary* itemInfo in jSon)
    {
        DnDBCharacterCustomItem*    anItem  =   DnDBCharacterCustomItem.new;
        
        [anItem setValuesForKeysWithDictionary: itemInfo];
        
        [items addObject: anItem];
    }
    
    return items;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"description"])
    {
        _desc = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end

