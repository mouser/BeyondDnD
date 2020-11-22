//
//  DnDBSpells.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBSpell.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpells : DoJSONBase

@property (nonatomic, retain) NSArray<DnDBSpell*>*     race;
@property (nonatomic, retain) NSArray<DnDBSpell*>*     classSpells; //class
@property (nonatomic, retain) NSArray<DnDBSpell*>*     item;
@property (nonatomic, retain) NSArray<DnDBSpell*>*     feat;

@end

NS_ASSUME_NONNULL_END
