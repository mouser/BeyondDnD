//
//  DnDBRacialTraits.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBRacialTraits.h"

@implementation DnDBRacialTraits

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"definitions"])
    {
        _definitions    =   DnDBRacialTrait.new;
        
        [self.definitions setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
