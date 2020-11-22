//
//  DnDBSpells.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBSpells.h"

@implementation DnDBSpells

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"race"])
    {
        _race = [DnDBSpell spellsFrom: value];
    }
    else if ([key isEqualToString: @"class"])
    {
        _classSpells = [DnDBSpell spellsFrom: value];
    }
    else if ([key isEqualToString: @"item"])
    {
        _item = [DnDBSpell spellsFrom: value];
    }
    else if ([key isEqualToString: @"feat"])
    {
        _feat = [DnDBSpell spellsFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
