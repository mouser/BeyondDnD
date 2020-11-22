//
//  DnDBCharacterChoice.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterChoice.h"

@implementation DnDBCharacterChoice

+ (NSArray<DnDBCharacterChoice*>*) choicesFrom: (NSArray*) json
{
    NSMutableArray*     elements        =   NSMutableArray.new;
    
    for (NSDictionary* choicesInfo in json)
    {
        DnDBCharacterChoice*    aChoice =   DnDBCharacterChoice.new;
        
        [aChoice setValuesForKeysWithDictionary: choicesInfo];
        
        [elements addObject: aChoice];
    }
    
    return elements;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"options"])
    {
        _options = [DnDBChoiceOptions optionsFrom: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
    
}

@end
