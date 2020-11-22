//
//  DnDBNotes.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBNotes : DoJSONBase

@property (nonatomic, retain) NSString*             allies;
@property (nonatomic, retain) NSString*             personalPossessions;
@property (nonatomic, retain) NSString*             otherHoldings;
@property (nonatomic, retain) NSString*             organizations;
@property (nonatomic, retain) NSString*             enemies;
@property (nonatomic, retain) NSString*             backstory;
@property (nonatomic, retain) NSString*             otherNotes;

@end

NS_ASSUME_NONNULL_END
