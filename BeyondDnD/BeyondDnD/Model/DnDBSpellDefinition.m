//
//  DnDBSpellDefinition.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBSpellDefinition.h"

@implementation DnDBSpellDefinition

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"activation"])
    {
        _activation =   DnDBSpellActivation.new;
        [self.activation setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"range"])
    {
        _range = DnDBSpellRange.new;
        [self.range setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"description"])
    {
        _desc = value;
    }
    else if ([key isEqualToString: @"duration"])
    {
        _duration   =   DnDBSpellDuration.new;
        [self.duration setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
