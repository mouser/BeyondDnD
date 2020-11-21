//
//  DnDBCharacterValue.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBCharacterValue.h"

@implementation DnDBCharacterValue

+ (NSArray<DnDBCharacterValue*>*) valuesFrom: (NSArray*) jSon
{
    NSMutableArray*     characterValues     =   NSMutableArray.new;
    
    for (NSDictionary* aValueInfo in jSon)
    {
        DnDBCharacterValue* aValue  =   DnDBCharacterValue.new;
        
        [aValue setValuesForKeysWithDictionary: aValueInfo];
        
        [characterValues addObject: aValue];
    }
    
    return characterValues;
}

@end
