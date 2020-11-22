//
//  DnDBCharacterClassSpells.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBSpell.h>

NS_ASSUME_NONNULL_BEGIN

@class DnDBCharacterClassSpells;

@interface DnDBCharacterClassSpells : DoJSONBase

+ (NSArray<DnDBCharacterClassSpells*>*) classSpellsFrom: (NSArray*) json;

@property (nonatomic, retain) NSNumber*             entityTypeId;
@property (nonatomic, retain) NSNumber*             characterClassId;
@property (nonatomic, retain) NSArray<DnDBSpell*>*  spells;

@end

NS_ASSUME_NONNULL_END
