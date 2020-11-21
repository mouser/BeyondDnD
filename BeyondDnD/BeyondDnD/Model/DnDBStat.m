//
//  DnDBStat.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBStat.h"

@implementation DnDBStat

+ (NSArray<DnDBStat*>*) statBlockWith: (NSArray*) jSon
{
    NSMutableArray*     statBlock   =   NSMutableArray.new;
    
    for (NSDictionary* aStatDict in jSon)
    {
        DnDBStat*   aStat   =   DnDBStat.new;
        
        [aStat setValuesForKeysWithDictionary: aStatDict];
        
        [statBlock addObject: aStat];
    }
    
    return statBlock;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = ((NSNumber*) value).intValue;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
