//
//  DnDBSpell.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBSpell.h"

@implementation DnDBSpell

+ (NSArray<DnDBSpell*>*) spellsFrom: (NSArray*) json
{
    NSMutableArray*     elements    =   NSMutableArray.new;
    
    for (NSDictionary* aSpellInfo in json)
    {
        DnDBSpell*  aSpell  =   DnDBSpell.new;
        
        [aSpell setValuesForKeysWithDictionary: aSpellInfo];
        
        [elements addObject: aSpell];
    }
    
    return elements;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"limitedUse"])
    {
        _limitedUse = DnDBSpellLimitedUse.new;
            
        [self.limitedUse setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"activation"])
    {
        _activation = DnDBSpellActivation.new;
            
        [self.activation setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"range"])
    {
        _range = DnDBSpellRange.new;
            
        [self.range setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"definition"])
    {
        _definition = DnDBSpellDefinition.new;
            
        [self.definition setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
