//
//  DnDBCampaign.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"
#import "DnDBCharacterProxy.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCampaign : DoJSONBase

@property (nonatomic, retain) NSNumber*                     id_enditification;
@property (nonatomic, retain) NSString*                     name;
@property (nonatomic, retain) NSString*                     desc;
@property (nonatomic, retain) NSString*                     link;
@property (nonatomic, retain) NSString*                     publicNotes;
@property (nonatomic, retain) NSNumber*                     dmUserId;
@property (nonatomic, retain) NSString*                     dmUsername;

@property (nonatomic, retain) NSArray<DnDBCharacterProxy*>* characters;

@end

NS_ASSUME_NONNULL_END
