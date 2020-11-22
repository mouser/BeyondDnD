//
//  DnDBCharacterChoices.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBCharacterChoice.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterChoices : DoJSONBase

@property (nonatomic, retain) NSArray<DnDBCharacterChoice*>*        feat;
@property (nonatomic, retain) NSArray<DnDBCharacterChoice*>*        race;
@property (nonatomic, retain) NSArray<DnDBCharacterChoice*>*        dClass;
@property (nonatomic, retain) NSArray<DnDBCharacterChoice*>*        background;

@end

NS_ASSUME_NONNULL_END
