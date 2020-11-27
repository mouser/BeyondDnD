//
//  DnDBCharacterAction.m
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import "DnDBCharacterAction.h"

@implementation DnDBCharacterAction

+ (NSArray<DnDBCharacterAction*>*) actionsFrom: (NSArray*) json
{
    NSMutableArray*     actions =   NSMutableArray.new;
    
    for (NSDictionary* anActionInfo in json)
    {
        DnDBCharacterAction*    anAction    =   DnDBCharacterAction.new;
        
        [anAction setValuesForKeysWithDictionary: anActionInfo];
        
        [actions addObject: anAction];
    }
    
    return actions;
}

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"id"])
    {
        _id_entification = value;
    }
    else if ([key isEqualToString: @"limitedUse"])
    {
        _limitedUse = DnDBSpellLimitedUse.new;
        [self.limitedUse setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"description"])
    {
        _desc = value;
    }
    else if ([key isEqualToString: @"activation"])
    {
        _activation = DnDBSpellActivation.new;
        [self.activation setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"range"])
    {
        _range = DnDBActionRange.new;
        [self.range setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"attackCustomData"])
    {
        _attackCustomData = DnDBAttackCustomData.new;
        [self.attackCustomData setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
}
@end
