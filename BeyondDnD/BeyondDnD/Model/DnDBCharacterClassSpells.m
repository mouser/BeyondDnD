//
//  DnDBCharacterClassSpells.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterClassSpells.h"

@implementation DnDBCharacterClassSpells

+ (NSArray<DnDBCharacterClassSpells*>*) classSpellsFrom: (NSArray*) json
{
    NSMutableArray* elements    =   NSMutableArray.new;
    
    for (NSDictionary* classSpellInfo in json)
    {
        DnDBCharacterClassSpells*   aClassSpell =   DnDBCharacterClassSpells.new;
        
        [aClassSpell setValuesForKeysWithDictionary: classSpellInfo];
        
        [elements addObject: aClassSpell];
    }
    
    return elements;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"spells"])
    {
        _spells = [DnDBSpell spellsFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
