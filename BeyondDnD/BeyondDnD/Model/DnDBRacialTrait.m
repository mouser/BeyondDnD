//
//  DnDBRacialTrait.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBRacialTrait.h"

@implementation DnDBRacialTrait


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
    else if ([key isEqualToString: @"activation"])
    {
        _activation = DnDBActivation.new;
        [self.activation setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
