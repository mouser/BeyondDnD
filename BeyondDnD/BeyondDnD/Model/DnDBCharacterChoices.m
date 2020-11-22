//
//  DnDBCharacterChoices.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterChoices.h"

@implementation DnDBCharacterChoices

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"feat"])
    {
        _feat = [DnDBCharacterChoice choicesFrom: value];
    }
    else if ([key isEqualToString: @"race"])
    {
        _race = [DnDBCharacterChoice choicesFrom: value];
    }
    else if ([key isEqualToString: @"class"])
    {
        _dClass = [DnDBCharacterChoice choicesFrom: value];
    }
    else if ([key isEqualToString: @"background"])
    {
        _background = [DnDBCharacterChoice choicesFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
