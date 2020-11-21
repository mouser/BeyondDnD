//
//  DoJSONBase.m
//  DoObjects
//
//  Created by Martin-Gilles Lavoie on 2020-11-14.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

@implementation DoJSONBase

- (void) setValue: (id) value
  forUndefinedKey: (NSString*) key
{
    if (!_dojUnknownValues)
    {
        _dojUnknownValues = NSMutableDictionary.new;
    }
    
#if DEBUG
    NSLog(@"%@ encountered an unexpected value keyed %@",
          NSStringFromClass(self.class),
          key);
#endif
    
    self.dojUnknownValues[key] = value;
}

@end
