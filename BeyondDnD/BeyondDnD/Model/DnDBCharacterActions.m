//
//  DnDBCharacterActions.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterActions.h"

@implementation DnDBCharacterActions

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"race"])
    {
        _race = [DnDBCharacterAction actionsFrom: value];
    }
    else if ([key isEqualToString: @"class"])
    {
        _dClass = [DnDBCharacterAction actionsFrom: value];
    }
    else if ([key isEqualToString: @"feat"])
    {
        _feat = [DnDBCharacterAction actionsFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
