//
//  DnDBAttackCustomData.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-26.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBAttackCustomData : DoJSONBase

@property (nonatomic, retain) NSString*         name;
@property (nonatomic, retain) NSString*         notes; 
@property (nonatomic, retain) NSNumber*         damageBonus;    //": null,  TBD?
@property (nonatomic, retain) NSNumber*         toHitBonus; //": null,  TBD?
@property (nonatomic, retain) NSNumber*         toHit;  //": null,  TBD?
@property (nonatomic, retain) NSNumber*         isOffhand;  //": null,  TBD?
@property (nonatomic, retain) NSNumber*         isSilver;   //": null,  TBD?
@property (nonatomic, retain) NSNumber*         isAdamantine;   //": null,  TBD?
@property (nonatomic, retain) NSNumber*         isProficient;   //": null,  TBD?
@property (nonatomic, retain) NSNumber*         saveDcBonus;    //": null,  TBD?
@property (nonatomic, retain) NSNumber*         saveDc; //": null,  TBD?
@property (nonatomic, retain) NSNumber*         weight; //": null,  TBD?
@property (nonatomic, retain) NSNumber*         displayAsAttack;    //": null,  TBD?
@property (nonatomic, retain) NSNumber*         cost;   //": null   TBD?

@end

NS_ASSUME_NONNULL_END
