//
//  DnDBWeightSpeeds.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBWeightSpeeds.h"

@implementation DnDBWeightSpeeds

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"override"])
    {
        _over_ride = value;
    }
    else if ([key isEqualToString: @"normal"])
    {
        _normal =   DnDBNormalSpeed.new;
        
        [self.normal setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}



@end
