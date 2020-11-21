//
//  DnDBSpellSlot.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBSpellSlot.h"

@implementation DnDBSpellSlot

+ (NSArray<DnDBSpellSlot*>*) slotsFrom: (NSArray*) json
{
    NSMutableArray*     spellSlots  =   NSMutableArray.new;
    
    for (NSDictionary* aValueInfo in json)
    {
        DnDBSpellSlot* aValue  =   DnDBSpellSlot.new;
        
        [aValue setValuesForKeysWithDictionary: aValueInfo];
        
        [spellSlots addObject: aValue];
    }
    
    return spellSlots;
}

@end
