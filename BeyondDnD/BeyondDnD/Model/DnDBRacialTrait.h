//
//  DnDBRacialTrait.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>
#import <BeyondDnD/DnDBActivation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBRacialTrait : DoJSONBase

@property (nonatomic, retain) NSNumber*         id_entification;    //: 68,
@property (nonatomic, retain) NSNumber*         entityTypeId;       //: 1960452172,
@property (nonatomic, retain) NSNumber*         displayOrder;       //: 1,
@property (nonatomic, retain) NSString*         name;               //: "Ability Score Increase",
@property (nonatomic, retain) NSString*         desc;               //: "<p>Your Constitution score in<span class=\"No-Break\">creases by 2.</span></p>",
@property (nonatomic, retain) NSObject*         snippet;            // ??
@property (nonatomic, retain) NSNumber*         hideInBuilder;      //: true,
@property (nonatomic, retain) NSNumber*         hideInSheet;        //: true,
    
@property (nonatomic, retain) DnDBActivation*   activation;

@property (nonatomic, retain) NSNumber*         sourceId;
@property (nonatomic, retain) NSNumber*         sourcePageNumber;
@property (nonatomic, retain) NSArray*          creatureRules;

@end

NS_ASSUME_NONNULL_END
