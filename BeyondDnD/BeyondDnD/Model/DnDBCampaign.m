//
//  DnDBCampaign.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBCampaign.h"

@implementation DnDBCampaign

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_enditification = value;
    }
    else if ([key isEqualToString: @"characters"])
    {
        _characters = [DnDBCharacterProxy charactersFrom: value];
    }
    else if ([key isEqualToString: @"description"])
    {
        _desc = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
