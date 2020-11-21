//
//  DnDBStat.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSonBase.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    DnDBStat_STR =   1,
    DnDBStat_CON,
    DnDBStat_DEX,
    DnDBStat_INT,
    DnDBStat_WIZ,
    DnDBStat_CHA
} DnDBStatID;

@interface DnDBStat : DoJSONBase

@property (nonatomic, assign) DnDBStatID    id_entification;
@property (nonatomic, retain) NSString*     name;
@property (nonatomic, retain) NSNumber*     value;

+ (NSArray<DnDBStat*>*) statBlockWith: (NSArray*) jSon;

@end

NS_ASSUME_NONNULL_END
