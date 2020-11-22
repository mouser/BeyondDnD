//
//  DnDBModifier.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBModifier.h"

@implementation DnDBModifier

+ (NSArray<DnDBModifier*>*) modifiersFrom: (NSArray<NSDictionary*>*) info
{
    NSMutableArray*     modifiers    =   NSMutableArray.new;
    
    for (NSDictionary* aModifierInfo in (NSArray*) info)
    {
        DnDBModifier*   aModifier   =   DnDBModifier.new;
        
        [aModifier setValuesForKeysWithDictionary: aModifierInfo];
        [modifiers addObject: aModifier];
    }
    
    return modifiers;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
