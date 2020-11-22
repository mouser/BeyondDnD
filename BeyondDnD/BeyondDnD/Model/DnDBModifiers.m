//
//  DnDBModifiers.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBModifiers.h"

@implementation DnDBModifiers

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"race"])
    {
        NSMutableArray*     modifiers    =   NSMutableArray.new;
        
        for (NSDictionary* info in (NSArray*) value)
        {
            DnDBModifier*   aModifier   =   DnDBModifier.new;
            
            [aModifier setValuesForKeysWithDictionary: info];
            [modifiers addObject: aModifier];
        }
        
        _race = (id) modifiers;
    }
    else if ([key isEqualToString: @"class"])
    {
        NSMutableArray*     modifiers    =   NSMutableArray.new;
        
        for (NSDictionary* info in (NSArray*) value)
        {
            DnDBModifier*   aModifier   =   DnDBModifier.new;
            
            [aModifier setValuesForKeysWithDictionary: info];
            [modifiers addObject: aModifier];
        }
        
        _dClass = (id) modifiers;
    }
    else if ([key isEqualToString: @"background"])
    {
        NSMutableArray*     modifiers    =   NSMutableArray.new;
        
        for (NSDictionary* info in (NSArray*) value)
        {
            DnDBModifier*   aModifier   =   DnDBModifier.new;
            
            [aModifier setValuesForKeysWithDictionary: info];
            [modifiers addObject: aModifier];
        }
        
        _background = (id) modifiers;
    }
    else if ([key isEqualToString: @"item"])
    {
        NSMutableArray*     modifiers    =   NSMutableArray.new;
        
        for (NSDictionary* info in (NSArray*) value)
        {
            DnDBModifier*   aModifier   =   DnDBModifier.new;
            
            [aModifier setValuesForKeysWithDictionary: info];
            [modifiers addObject: aModifier];
        }
        
        _item = (id) modifiers;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}


@end
