//
//  DnDBRacialTraits.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBRacialTraits.h"

@implementation DnDBRacialTraits

+ (NSArray<DnDBRacialTraits*>*) racialTraitsFrom: (NSArray<NSDictionary*>*) info
{
    NSMutableArray*             racialTraits    =   NSMutableArray.new;
    
    NSArray<NSDictionary*>*     traits           =   (id) racialTraits;
    
    for (NSDictionary* aTrait in traits)
    {
        DnDBRacialTraits*   traitsRecord    =   DnDBRacialTraits.new;
        
        [traitsRecord setValuesForKeysWithDictionary: aTrait];
        
        [racialTraits addObject: traitsRecord];
    }
    
    return racialTraits;
}

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
