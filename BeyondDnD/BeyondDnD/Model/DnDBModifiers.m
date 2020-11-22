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
        _race = [DnDBModifier modifiersFrom: value];
    }
    else if ([key isEqualToString: @"class"])
    {
        _dClass = [DnDBModifier modifiersFrom: value];
    }
    else if ([key isEqualToString: @"background"])
    {
        _background = [DnDBModifier modifiersFrom: value];
    }
    else if ([key isEqualToString: @"item"])
    {
        _item = [DnDBModifier modifiersFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}


@end
