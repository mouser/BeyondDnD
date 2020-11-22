//
//  DnDBRace.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBRace.h"

@implementation DnDBRace

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"racialTraits"])
    {
        NSMutableArray*             racialTraits    =   NSMutableArray.new;
        
        NSArray<NSDictionary*>*     traits           =   (id) racialTraits;
        
        for (NSDictionary* aTrait in traits)
        {
            DnDBRacialTraits*   traitsRecord    =   DnDBRacialTraits.new;
            
            [traitsRecord setValuesForKeysWithDictionary: aTrait];
            
            [racialTraits addObject: traitsRecord];
        }
        
        _racialTraits = racialTraits;
    }
    else if ([key isEqualToString: @"weightSpeeds"])
    {
        _weightSpeeds    =   DnDBWeightSpeeds.new;
        
        [self.weightSpeeds setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"description"])
    {
        _desc    =   value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
