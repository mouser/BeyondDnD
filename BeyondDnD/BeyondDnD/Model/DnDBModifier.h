//
//  DnDBModifier.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBModifier : DoJSONBase

@property (nonatomic, retain) NSString*                 id_entification;        // "racialTrait_6_1339"
@property (nonatomic, retain) NSNumber*                 entityId;               // 2
@property (nonatomic, retain) NSNumber*                 entityTypeId;           // 668550506
@property (nonatomic, retain) NSString*                 type;                   // "set-base"
@property (nonatomic, retain) NSString*                 subType;                // "darkvision"
@property (nonatomic, retain) NSNumber*                 dice;                   // null
@property (nonatomic, retain) NSString*                 restriction;            // ""
@property (nonatomic, retain) NSNumber*                 statId;                 // null
@property (nonatomic, retain) NSNumber*                 requiresAttunement;     // false
@property (nonatomic, retain) NSNumber*                 duration;               // null
@property (nonatomic, retain) NSString*                 friendlyTypeName;       // "Set Base"
@property (nonatomic, retain) NSString*                 friendlySubtypeName;    // "Darkvision"
@property (nonatomic, retain) NSNumber*                 isGranted;              // true
@property (nonatomic, retain) NSArray*                  bonusTypes;             // [] TBD
@property (nonatomic, retain) NSNumber*                 value;                  // 60
@property (nonatomic, retain) NSNumber*                 componentId;            // 6
@property (nonatomic, retain) NSNumber*                 componentTypeId;        // 196045217

@end

NS_ASSUME_NONNULL_END
