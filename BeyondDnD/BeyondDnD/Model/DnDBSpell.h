//
//  DnDBSpell.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBSpellLimitedUse.h>
#import <BeyondDnD/DnDBSpellActivation.h>
#import <BeyondDnD/DnDBSpellRange.h>
#import <BeyondDnD/DnDBSpellDefinition.h>

NS_ASSUME_NONNULL_BEGIN

@class DnDBSpell;
@interface DnDBSpell : DoJSONBase

+ (NSArray<DnDBSpell*>*) spellsFrom: (NSArray*) json;

@property (nonatomic, retain) NSNumber*             overrideSaveDc;
@property (nonatomic, retain) NSNumber*             id_entification;
@property (nonatomic, retain) NSNumber*             entityTypeId;
@property (nonatomic, retain) NSNumber*             prepared;
@property (nonatomic, retain) NSNumber*             countsAsKnownSpell;
@property (nonatomic, retain) NSNumber*             usesSpellSlot;
@property (nonatomic, retain) NSNumber*             castAtLevel;
@property (nonatomic, retain) NSNumber*             alwaysPrepared;
@property (nonatomic, retain) NSString*             restriction;
@property (nonatomic, retain) NSNumber*             spellCastingAbilityId;
@property (nonatomic, retain) NSNumber*             displayAsAttack;
@property (nonatomic, retain) NSNumber*             additionalDescription;
@property (nonatomic, retain) NSNumber*             castOnlyAsRitual;
@property (nonatomic, retain) NSNumber*             ritualCastingType;
@property (nonatomic, retain) NSNumber*             baseLevelAtWill;
@property (nonatomic, retain) NSNumber*             atWillLimitedUseLevel;
@property (nonatomic, retain) NSNumber*             componentId;
@property (nonatomic, retain) NSNumber*             componentTypeId;
@property (nonatomic, retain) DnDBSpellLimitedUse*  limitedUse;
@property (nonatomic, retain) DnDBSpellDefinition*  definition;
@property (nonatomic, retain) DnDBSpellRange*       range;
@property (nonatomic, retain) DnDBSpellActivation*  activation;

@end

NS_ASSUME_NONNULL_END
