//
//  DnDBCharacterPreferences.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-21.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBCharacterPreferences : DoJSONBase

@property (nonatomic, retain) NSNumber*         useHomebrewContent;
@property (nonatomic, retain) NSNumber*         progressionType;
@property (nonatomic, retain) NSNumber*         encumbranceType;
@property (nonatomic, retain) NSNumber*         ignoreCoinWeight;
@property (nonatomic, retain) NSNumber*         hitPointType;
@property (nonatomic, retain) NSNumber*         showUnarmedStrike;
@property (nonatomic, retain) NSNumber*         showCompanions;
@property (nonatomic, retain) NSNumber*         showWildShape;
@property (nonatomic, retain) NSNumber*         primarySense;
@property (nonatomic, retain) NSNumber*         primaryMovement;
@property (nonatomic, retain) NSNumber*         privacyType;
@property (nonatomic, retain) NSNumber*         sharingType;
@property (nonatomic, retain) NSNumber*         abilityScoreDisplayType;
@property (nonatomic, retain) NSNumber*         enforceFeatRules;
@property (nonatomic, retain) NSNumber*         enforceMulticlassRules;

@end

NS_ASSUME_NONNULL_END
