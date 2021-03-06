//
//  DnDBCharacterTraits.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterTraits : DoJSONBase

@property (nonatomic, retain) NSString*         personalityTraits;
@property (nonatomic, retain) NSString*         ideals;
@property (nonatomic, retain) NSString*         bonds;
@property (nonatomic, retain) NSString*         flaws;
@property (nonatomic, retain) NSString*         appearance;

@end

NS_ASSUME_NONNULL_END
