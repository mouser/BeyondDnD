//
//  DnDBCharacterOptions.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterOptions : DoJSONBase

@property (nonatomic, retain) NSArray*                  race;
@property (nonatomic, retain) NSArray*                  dClass;
@property (nonatomic, retain) NSArray*                  feat;

@end

NS_ASSUME_NONNULL_END
