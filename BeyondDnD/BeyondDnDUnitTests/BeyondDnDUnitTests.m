//
//  BeyondDnDUnitTests.m
//  BeyondDnDUnitTests
//
//  Created by Martin-Gilles Lavoie on 2020-11-20.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#pragma mark - Sheet internal methods

@import XCTest;
@import BeyondDnD;

@interface BeyondDnDSheet (tests)

- (NSInteger) levelFrom: (NSInteger) xp;

@end

#pragma mark - Unit Tests

@interface BeyondDnDUnitTests : XCTestCase

@end

@implementation BeyondDnDUnitTests

- (void) testLevels
{
    BeyondDnDSheet*  sheet   =   BeyondDnDSheet.new;
    
    // DnDB only stores XP and infers levels based on that number.
    // They dont support levels above 20. I do.
    // Test level ranges to make sure out level computation is good.
    XCTAssertEqual([sheet levelFrom: 0], 1);
    XCTAssertEqual([sheet levelFrom: 299], 1);
    
    XCTAssertEqual([sheet levelFrom: 300], 2);
    XCTAssertEqual([sheet levelFrom: 899], 2);
    
    XCTAssertEqual([sheet levelFrom: 900], 3);
    XCTAssertEqual([sheet levelFrom: 2699], 3);
    
    XCTAssertEqual([sheet levelFrom: 2700], 4);
    XCTAssertEqual([sheet levelFrom: 6499], 4);
    
    XCTAssertEqual([sheet levelFrom: 6500], 5);
    XCTAssertEqual([sheet levelFrom: 13999], 5);
    
    XCTAssertEqual([sheet levelFrom: 14000], 6);
    XCTAssertEqual([sheet levelFrom: 22999], 6);
    
    XCTAssertEqual([sheet levelFrom: 23000], 7);
    XCTAssertEqual([sheet levelFrom: 33999], 7);
    
    XCTAssertEqual([sheet levelFrom: 34000], 8);
    XCTAssertEqual([sheet levelFrom: 47999], 8);
    
    XCTAssertEqual([sheet levelFrom: 48000], 9);
    XCTAssertEqual([sheet levelFrom: 63999], 9);
    
    XCTAssertEqual([sheet levelFrom: 64000], 10);
    XCTAssertEqual([sheet levelFrom: 84999], 10);
    
    XCTAssertEqual([sheet levelFrom: 85000], 11);
    XCTAssertEqual([sheet levelFrom: 99999], 11);
    
    XCTAssertEqual([sheet levelFrom: 100000], 12);
    XCTAssertEqual([sheet levelFrom: 119999], 12);
    
    XCTAssertEqual([sheet levelFrom: 120000], 13);
    XCTAssertEqual([sheet levelFrom: 139999], 13);
    
    XCTAssertEqual([sheet levelFrom: 140000], 14);
    XCTAssertEqual([sheet levelFrom: 164999], 14);
    
    XCTAssertEqual([sheet levelFrom: 165000], 15);
    XCTAssertEqual([sheet levelFrom: 194999], 15);
    
    XCTAssertEqual([sheet levelFrom: 195000], 16);
    XCTAssertEqual([sheet levelFrom: 224999], 16);
    
    XCTAssertEqual([sheet levelFrom: 225000], 17);
    XCTAssertEqual([sheet levelFrom: 264999], 17);
    
    XCTAssertEqual([sheet levelFrom: 265000], 18);
    XCTAssertEqual([sheet levelFrom: 304999], 18);
    
    XCTAssertEqual([sheet levelFrom: 305000], 19);
    XCTAssertEqual([sheet levelFrom: 354999], 19);
    
    XCTAssertEqual([sheet levelFrom: 355000], 20);
    
    NSInteger   inc =   355000 - 305000;
    NSInteger   lvl =   355000;
    
    // Extrapolation of levels based on official LVL 19-20 progression for extra levels
    // Ie, the progression from 19 to 20 is assumed to be the same for any levels above 20.
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 21);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 22);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 23);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 24);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 25);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 26);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 27);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 28);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 29);
    XCTAssertEqual([sheet levelFrom: lvl+=inc], 30);
    //etc
}

- (NSDictionary*) loadJSon: (NSString*) name
{
    NSURL*     bundleURL    =   [NSBundle bundleForClass: self.class]. bundleURL;
    NSURL*     url          =   [NSBundle URLForResource: name.stringByDeletingPathExtension
                                           withExtension: name.pathExtension
                                            subdirectory: nil
                                         inBundleWithURL: bundleURL];
    
    NSData*     jsonData    =   [NSData dataWithContentsOfURL: url];
    NSError*    error       =   nil;
    
    NSMutableDictionary*    jsonDict    =   (id) [NSJSONSerialization JSONObjectWithData: jsonData
                                                                                 options: NSJSONReadingMutableContainers | NSJSONReadingMutableLeaves
                                                                                   error: &error];
    
    return jsonDict;
}

- (void) testLoadJSON
{
    id  loadedDict  =   [self loadJSon: @"Ulfrik.json"];
    
    XCTAssertNotNil(loadedDict);
}

- (void) testKeyingJSon
{
    DnDBCharacter*  ulfrik      =   DnDBCharacter.new;
    NSDictionary*   ulfrikInfo  =   [self loadJSon: @"Ulfrik.json"];
    
    [ulfrik setValuesForKeysWithDictionary: ulfrikInfo];
    
    XCTAssertNotNil(ulfrik);
    
    XCTAssert(ulfrik.age.intValue == 60,            @"Expected age to be 60");
    XCTAssert(ulfrik.stats.count == 6,              @"Expected 6 stat blocks");
    XCTAssert(ulfrik.bonusStats.count == 6,         @"Expected 6 bonus stat blocks");
    XCTAssert(ulfrik.overrideStats.count == 6,      @"Expected 6 stat blocks");
    
    XCTAssert(ulfrik.spellSlots.count == 9,         @"Expected 9 spell slots");
    XCTAssert(ulfrik.pactMagic.count == 5,          @"Expected 5 pack magic slots");
}

- (void) testLocalPath
{
    NSString*   bogusFilePath       =   @"file://My Volume/MyPath/characters/234567890";
    NSString*   resolvedFilePath    =   [BeyondDnDSheet jSonPathFrom: bogusFilePath];
    
    XCTAssert([bogusFilePath isEqualToString: resolvedFilePath], @"Was not expecting the URL string to change");
}

- (void) testRealPath
{
    NSString*   realPathFakeID      =   @"https://www.dndbeyond.com/characters/12345678";
    NSString*   resolvedFilePath    =   [BeyondDnDSheet jSonPathFrom: realPathFakeID];
    
    XCTAssert([realPathFakeID isEqualToString: resolvedFilePath] == NO, @"Expected the paths to be different");
    
    XCTAssert([resolvedFilePath.lastPathComponent isEqualToString: @"json"], @"Expected the path to end with /json");
}

@end
