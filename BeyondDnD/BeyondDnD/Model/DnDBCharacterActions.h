//
//  DnDBCharacterActions.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBCharacterAction.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterActions : DoJSONBase

@property (nonatomic, retain) NSArray<DnDBCharacterAction*>*    race;
@property (nonatomic, retain) NSArray<DnDBCharacterAction*>*    dClass;
@property (nonatomic, retain) NSArray<DnDBCharacterAction*>*    feat;

@end

NS_ASSUME_NONNULL_END
