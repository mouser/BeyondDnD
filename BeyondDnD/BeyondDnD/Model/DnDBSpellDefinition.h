//
//  DnDBSpellDefinition.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBSpellActivation.h>
#import <BeyondDnD/DnDBSpellRange.h>
#import <BeyondDnD/DnDBSpellDuration.h>
#import <BeyondDnD/DnDBSpellAtHigherLevels.h>

// This is speculative and needs to be confirmed
typedef enum : NSInteger
{
    v_component =   1,
    s_component =   2,
    m_component =   3,
    
} DnDBSpellDefinitionComponent;

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellDefinition : DoJSONBase

@property (nonatomic, retain) NSString*                 id_entification;    //": 2007,
@property (nonatomic, retain) NSString*                 name;               //": "Augury",
@property (nonatomic, retain) NSNumber*                 level;              //": 2,
@property (nonatomic, retain) NSString*                 school;             //": "Divination",
@property (nonatomic, retain) DnDBSpellActivation*      activation;         //"
@property (nonatomic, retain) DnDBSpellRange*           range;              //
@property (nonatomic, retain) NSNumber*                 asPartOfWeaponAttack;
@property (nonatomic, retain) NSString*                 desc;
@property (nonatomic, retain) NSString*                 snippet;
@property (nonatomic, retain) NSNumber*                 concentration;
@property (nonatomic, retain) NSNumber*                 ritual;
@property (nonatomic, retain) NSArray<NSNumber*>*       components;     //  DnDBSpellDefinitionComponent
@property (nonatomic, retain) NSArray<NSString*>*       tags;
@property (nonatomic, retain) NSString*                 castingTimeDescription;
@property (nonatomic, retain) NSString*                 componentsDescription;
@property (nonatomic, retain) NSNumber*                 saveDcAbilityId;
@property (nonatomic, retain) NSNumber*                 healing;
@property (nonatomic, retain) NSNumber*                 healingDice;
@property (nonatomic, retain) NSNumber*                 tempHpDice;
@property (nonatomic, retain) NSNumber*                 attackType;
@property (nonatomic, retain) NSNumber*                 canCastAtHigherLevel;
@property (nonatomic, retain) NSNumber*                 isHomebrew;
@property (nonatomic, retain) NSNumber*                 version;
@property (nonatomic, retain) NSNumber*                 sourceId;
@property (nonatomic, retain) NSNumber*                 sourcePageNumber;
@property (nonatomic, retain) NSNumber*                 requiresSavingThrow;
@property (nonatomic, retain) NSNumber*                 requiresAttackRoll;

#warning TO DO These TBD structures are not yet fleshed out--Didn't see a usage yet
@property (nonatomic, retain) NSObject*                 rangeArea;      // TBD
@property (nonatomic, retain) NSObject*                 damageEffect;   // TBD
@property (nonatomic, retain) NSArray<NSObject*>*       modifiers;      // TBD
@property (nonatomic, retain) NSArray<NSObject*>*       conditions;     // TBD
@property (nonatomic, retain) DnDBSpellDuration*        duration;
@property (nonatomic, retain) DnDBSpellAtHigherLevels*  atHigherLevels;

@end

NS_ASSUME_NONNULL_END
