//
//  DnDBCharacterAction.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBActionRange.h>
#import <BeyondDnD/DnDBSpellActivation.h>
#import <BeyondDnD/DnDBSpellLimitedUse.h>
#import <BeyondDnD/DnDBAttackCustomData.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterAction : DoJSONBase

+ (NSArray<DnDBCharacterAction*>*) actionsFrom: (NSArray*) json;

@property (nonatomic, retain) NSNumber*                 id_entification;
@property (nonatomic, retain) NSNumber*                 entityTypeId;
@property (nonatomic, retain) DnDBSpellLimitedUse*      limitedUse;
@property (nonatomic, retain) NSNumber*                 name;
@property (nonatomic, retain) NSString*                 desc;
@property (nonatomic, retain) NSString*                 snippet;
@property (nonatomic, retain) NSObject*                 abilityModifierStatId;//TBD?
@property (nonatomic, retain) NSString*                 onMissDescription;
@property (nonatomic, retain) NSString*                 saveFailDescription;
@property (nonatomic, retain) NSString*                 saveSuccessDescription;
@property (nonatomic, retain) NSObject*                 saveStatId; // Type TBD
@property (nonatomic, retain) NSObject*                 fixedSaveDc; // Type TBD
@property (nonatomic, retain) NSObject*                 attackTypeRange; // Type TBD
@property (nonatomic, retain) NSNumber*                 actionType;
@property (nonatomic, retain) NSObject*                 attackSubtype;  //Type TBD
@property (nonatomic, retain) NSObject*                 dice;   //Type TBD
@property (nonatomic, retain) NSObject*                 value;  //Type TBD
@property (nonatomic, retain) NSObject*                 damageTypeId;   //Type TBD
@property (nonatomic, retain) NSNumber*                 isMartialArts;
@property (nonatomic, retain) NSNumber*                 isProficient;
@property (nonatomic, retain) NSObject*                 spellRangeType;//Type TBD
@property (nonatomic, retain) NSObject*                 displayAsAttack;//Type TBD
@property (nonatomic, retain) DnDBActionRange*          range;
@property (nonatomic, retain) DnDBSpellActivation*      activation;
@property (nonatomic, retain) DnDBAttackCustomData*     attackCustomData;
@property (nonatomic, retain) NSNumber*                 componentId;
@property (nonatomic, retain) NSNumber*                 componentTypeId;

@end

NS_ASSUME_NONNULL_END
