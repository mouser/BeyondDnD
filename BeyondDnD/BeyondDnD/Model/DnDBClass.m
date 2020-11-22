//
//  DnDBClass.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBClass.h"


@implementation DnDBClass

+ (NSArray<DnDBClass*>*) classesFrom: (NSArray*) jSon
{
    NSMutableArray*     classes =   NSMutableArray.new;
    
    for (NSDictionary* aClassInfo in jSon)
    {
        DnDBClass*  aClass  =   DnDBClass.new;
        
        [aClass setValuesForKeysWithDictionary: aClassInfo];
        
        [classes addObject: aClass];
    }
    
    return classes;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}

@end
