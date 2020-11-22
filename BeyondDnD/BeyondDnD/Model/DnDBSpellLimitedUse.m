//
//  DnDBSpellLimitedUse.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBSpellLimitedUse.h"

@implementation DnDBSpellLimitedUse

-(void)setValue:(id)value forKey:(NSString *)key
{
    if ([key isEqualToString: @"operator"])
    {
        _op_erator = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
