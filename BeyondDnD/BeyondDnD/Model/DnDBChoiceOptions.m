//
//  DnDBChoiceOptions.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBChoiceOptions.h"

@implementation DnDBChoiceOptions

+ (NSArray<DnDBChoiceOptions*>*)  optionsFrom: (NSArray*) json
{
    NSMutableArray*     elements    =   NSMutableArray.new;
    
    for (NSDictionary* optionsInfo in json)
    {
        DnDBChoiceOptions*  anOption    =   DnDBChoiceOptions.new;
        
        [anOption setValuesForKeysWithDictionary: optionsInfo];
        
        [elements addObject: anOption];
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
