//
//  DnDBSpellLimitedUse.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellLimitedUse : DoJSONBase

@property (nonatomic, retain) NSString*             name;
@property (nonatomic, retain) NSNumber*             statModifierUsesId;
@property (nonatomic, retain) NSNumber*             resetType;
@property (nonatomic, retain) NSNumber*             numberUsed;
@property (nonatomic, retain) NSNumber*             minNumberConsumed;
@property (nonatomic, retain) NSNumber*             maxNumberConsumed;
@property (nonatomic, retain) NSNumber*             maxUses;
@property (nonatomic, retain) NSNumber*             op_erator;

@end

NS_ASSUME_NONNULL_END
