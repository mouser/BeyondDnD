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

@end
