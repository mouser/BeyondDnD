//
//  DnDBCharacterProxy.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBCharacterProxy.h"

@implementation DnDBCharacterProxy

+ (NSArray*) charactersFrom: (NSArray<NSDictionary*>*) json
{
    NSMutableArray* characters = NSMutableArray.new;
    
    for (NSDictionary* aCharProxyInfo in json)
    {
        DnDBCharacterProxy* aProxy  =   DnDBCharacterProxy.new;
         
        [aProxy setValuesForKeysWithDictionary: aCharProxyInfo];
        
        [characters addObject: aProxy];
    }
    
    return characters;
}

@end
