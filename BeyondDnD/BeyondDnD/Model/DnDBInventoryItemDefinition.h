//
//  DnDBInventoryItemDefinition.h
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-15.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DoJSONBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DnDBInventoryItemDefinition : DoJSONBase

@property (nonatomic, retain) NSNumber*                 baseItemId;
@property (nonatomic, retain) NSString*                 baseArmorName;
@property (nonatomic, retain) NSNumber*                 strengthRequirement;
@property (nonatomic, retain) NSNumber*                 armorClass;
@property (nonatomic, retain) NSNumber*                 stealthCheck;
@property (nonatomic, retain) NSNumber*                 armorTypeId;
@property (nonatomic, retain) NSNumber*                 id_entification;
@property (nonatomic, retain) NSNumber*                 baseTypeId;
@property (nonatomic, retain) NSNumber*                 entityTypeId;
@property (nonatomic, retain) NSNumber*                 canEquip;
@property (nonatomic, retain) NSNumber*                 magic;
@property (nonatomic, retain) NSString*                 name;
@property (nonatomic, retain) NSString*                 snippet;
@property (nonatomic, retain) NSNumber*                 weight;
@property (nonatomic, retain) NSString*                 type;
@property (nonatomic, retain) NSString*                 desc;
@property (nonatomic, retain) NSNumber*                 canAttune;
@property (nonatomic, retain) NSString*                 attunementDescription;
@property (nonatomic, retain) NSString*                 rarity;
@property (nonatomic, retain) NSNumber*                 isHomebrew;
@property (nonatomic, retain) NSNumber*                 version;
@property (nonatomic, retain) NSNumber*                 sourceId;
@property (nonatomic, retain) NSNumber*                 sourcePageNumber;
@property (nonatomic, retain) NSNumber*                 stackable;
@property (nonatomic, retain) NSNumber*                 bundleSize;
@property (nonatomic, retain) NSString*                 avatarUrl;
@property (nonatomic, retain) NSString*                 largeAvatarUrl;
@property (nonatomic, retain) NSString*                 filterType;
@property (nonatomic, retain) NSNumber*                 cost;
@property (nonatomic, retain) NSNumber*                 isPack;
@property (nonatomic, retain) NSNumber*                 levelInfusionGranted;
@property (nonatomic, retain) NSNumber*                 canBeAddedToInventory;
@property (nonatomic, retain) NSNumber*                 groupedId;
@property (nonatomic, retain) NSArray<NSString*>*       tags;
@property (nonatomic, retain) NSArray*                  grantedModifiers;//?
@property (nonatomic, retain) NSNumber*                 categoryId;
@property (nonatomic, retain) NSNumber*                 isMonkWeapon;
@property (nonatomic, retain) NSNumber*                 attackType;
@property (nonatomic, retain) NSNumber*                 fixedDamage;
@property (nonatomic, retain) NSNumber*                 range;
@property (nonatomic, retain) NSArray*                  weaponBehaviors;
@property (nonatomic, retain) NSNumber*                 properties;
@property (nonatomic, retain) NSNumber*                 longRange;
@property (nonatomic, retain) NSNumber*                 damage;
@property (nonatomic, retain) NSNumber*                 damageType;
@property (nonatomic, retain) NSString*                 subType;
@property (nonatomic, retain) NSNumber*                 isConsumable;
@property (nonatomic, retain) NSNumber*                 gearTypeId;

@end

NS_ASSUME_NONNULL_END
