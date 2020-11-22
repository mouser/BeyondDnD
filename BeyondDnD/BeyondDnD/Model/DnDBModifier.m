//
//  DnDBModifier.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBModifier.h"

@implementation DnDBModifier

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
