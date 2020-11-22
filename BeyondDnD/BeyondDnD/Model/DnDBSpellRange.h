//
//  DnDBSpellRange.h
//  BeyondDnD
//
//  Created by Martin-Gilles Lavoie on 2020-11-22.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <BeyondDnD/DoJSONBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface DnDBSpellRange : DoJSONBase

@property (nonatomic, retain) NSString*     origin;     //": "Self",
@property (nonatomic, retain) NSNumber*     rangeValue; //": 0,
@property (nonatomic, retain) NSNumber*     aoeType;    //": null, TBD
@property (nonatomic, retain) NSNumber*     aoeValue;   //": null, TBD

@end

NS_ASSUME_NONNULL_END
