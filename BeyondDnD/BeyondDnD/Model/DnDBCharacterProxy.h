//
//  DnDBCharacterProxy.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSonBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterProxy : DoJSONBase

@property (nonatomic, retain) NSNumber*         userId;
@property (nonatomic, retain) NSString*         username;
@property (nonatomic, retain) NSNumber*         characterId;
@property (nonatomic, retain) NSString*         characterName;
@property (nonatomic, retain) NSString*         characterUrl;
@property (nonatomic, retain) NSString*         avatarUrl;
@property (nonatomic, retain) NSNumber*         privacyType;

+ (NSArray*) charactersFrom: (NSArray<NSDictionary*>*) json;

@end

NS_ASSUME_NONNULL_END
