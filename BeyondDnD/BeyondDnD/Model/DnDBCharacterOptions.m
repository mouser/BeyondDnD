//
//  DnDBCharacterOptions.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterOptions.h"

@implementation DnDBCharacterOptions

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"class"])
    {
        _dClass = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
