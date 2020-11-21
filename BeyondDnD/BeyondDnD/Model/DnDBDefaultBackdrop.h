//
//  DnDBDefaultBackdrop.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBDefaultBackdrop : DoJSONBase

@property (nonatomic, retain) NSString*     backdropAvatarUrl;
@property (nonatomic, retain) NSString*     smallBackdropAvatarUrl;
@property (nonatomic, retain) NSString*     largeBackdropAvatarUrl;
@property (nonatomic, retain) NSString*     thumbnailBackdropAvatarUrl;

@end

NS_ASSUME_NONNULL_END
