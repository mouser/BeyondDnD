//
//  main.m
//  bdnd
//
//  Created by Martin-Gilles Lavoie on 2020-11-20.
//  Copyright © 2020 ca.DoRyu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdio.h>

#define KVERSION    "ed5.0.0"

@import BeyondDnD;

void HuhP(void);
void Crit(NSError* error);
void Conjure(NSDictionary* invocations);
void Help(void);
void Version(void);
void Stat(NSString* source,
          NSString* output);
void Dump(NSString* source,
          NSString* output,
          BOOL asDictionary);
NSURL* GetURLFrom(NSString* source);
NSString* getSecondaryParam(NSString *anArg,
                              NSInteger *argIndex,
                              int argc,
                              const char **argv,
                            const char **cArg);

// Le 'self' cmd line name!
NSString*   selfe   =   nil;

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSMutableDictionary*    params =   NSMutableDictionary.new;
        
        params[@"dict"]     =   @(NO);
        params[@"stat"]     =   @(NO);
        params[@"dump"]     =   @(NO);

        for (NSInteger argIndex = 0; argIndex < argc; argIndex++)
        {
            const char* cArg    =   argv[argIndex];
            
            if (argIndex == 0)
            {
                selfe   =   [[NSString alloc] initWithCString: cArg encoding: NSUTF8StringEncoding];
            }
            else
            {
                NSString*   anArg   =   [[NSString alloc] initWithCString: cArg
                                                                 encoding: NSUTF8StringEncoding];
                
                if ([anArg hasPrefix: @"-"])
                {
                    anArg = [anArg substringFromIndex: 1].lowercaseString;
                    
                    if ([anArg isEqualToString: @"help"])
                    {
                        Help();
                        break;
                    }
                    else if ([anArg isEqualToString: @"version"])
                    {
                        Version();
                        exit(0);
                    }
                    else if ([anArg isEqualToString: @"dict"])
                    {
                        params[@"dict"] = @(YES);
                    }
                    else if ([anArg isEqualToString: @"stat"])
                    {
                        params[@"stat"]     =   @(YES);
                        params[@"input"]    =   getSecondaryParam(anArg, &argIndex, argc, argv, &cArg);
                    }
                    else if ([anArg isEqualToString: @"dump"])
                    {
                        params[@"dump"]     =   @(YES);
                        params[@"input"]    =   getSecondaryParam(anArg, &argIndex, argc, argv, &cArg);
                    }
                    else if ([anArg isEqualToString: @"target"])
                    {
                        params[@"target"]    =   getSecondaryParam(anArg, &argIndex, argc, argv, &cArg);
                    }
                }
                else
                {
                    HuhP();
                    break;
                }
            }
        }
        
        Conjure(params);
    }
    return 0;
}

NSString* getSecondaryParam(NSString *anArg,
                              NSInteger *argIndex,
                              int argc,
                              const char **argv,
                              const char **cArg) {
    if (*argIndex < argc)
    {
        *argIndex += 1;
        *cArg    =   argv[*argIndex];
        
        NSString* param = [[NSString alloc] initWithCString: *cArg
                                                   encoding: NSUTF8StringEncoding];
        
        return param;
    }
    else
    {
        HuhP();
        return nil;
    }
}

void HuhP(void)
{
    printf("You CRIT\nTry %s -help\n", [selfe.lastPathComponent cStringUsingEncoding: NSUTF8StringEncoding]);
    exit(1);
}

void Crit(NSError* error)
{
    if (error)
    {
        printf("%s", [error.description cStringUsingEncoding: NSUTF8StringEncoding]);
    }
    
    printf("Counterspelled! That didn't work. \nTry %s -help", [selfe.lastPathComponent cStringUsingEncoding: NSUTF8StringEncoding]);
    
    exit(1);
}

void Conjure(NSDictionary* invocations)
{
    NSNumber*   dict            =   invocations[@"dict"];
    NSString*   input           =   invocations[@"input"];
    NSString*   dump            =   invocations[@"dump"];
    NSString*   target          =   invocations[@"target"];
    NSNumber*   stat            =   invocations[@"stat"];
    
    if (stat.boolValue)
    {
        Stat(input, target);
    }
    else if (dump.boolValue)
    {
        Dump(input, target, dict.boolValue);
    }
    else
    {
        HuhP();
    }
}

void Help(void)
{
    Version();
    printf("\n"\
           "-help\n"\
           "    Shows this information.\n"\
           "\n"\
           "-dump filePath | characterURL\n"\
           "    Dumps to the console the JSON pointed to by filePath | characterURL.\n"\
           "\n"\
           "-dict\n"\
           "    Rather than output JSON, format the output as NSDictionary.description.\n"\
           "\n"\
           "\n"\
           "-target filePath\n"\
           "    Set the output file of -dump; for those too lazy to pipe unix output.\n"\
           "\n"\
           "-stat filePath | characterURL\n"\
           "    Prints to the console the JSON pointed to by filePath | characterURL in a peseudo simple character sheet format.\n"\
           "\n");
    
    exit(0);
}

void Version(void)
{
    printf("%s version %s\n",
           [selfe.lastPathComponent cStringUsingEncoding: NSUTF8StringEncoding],
           KVERSION);
}

NSURL* GetURLFrom(NSString* source)
{
    NSURL*      url     =   nil;
    
    url = [NSURL URLWithString: source];

    return url;
}

void Dump(NSString* source,
          NSString* target,
          BOOL asDictionary)
{
    if ([BeyondDnDSheet isCharacterPage: source])
    {
        NSError*    error       =   nil;
        NSURL*      earl        =   GetURLFrom(source);
        NSData*     jsonData    =   [NSData dataWithContentsOfURL: earl];
        NSObject*   output;

        if (asDictionary)
        {
            output    =   [NSJSONSerialization JSONObjectWithData: jsonData
                                                          options: NSJSONReadingMutableContainers | NSJSONReadingMutableLeaves
                                                            error: &error];
            if (error)
            {
                Crit(error);
            }
        }
        else
        {
            output  =   (id) [NSString.alloc initWithData: jsonData
                                                 encoding: NSUTF8StringEncoding];
        }
        
        if (output)
        {
            if (target)
            {
                [output.description writeToURL: GetURLFrom(target)
                                    atomically: NO
                                      encoding: NSUTF8StringEncoding
                                         error: &error];
                
                if (error)
                {
                    Crit(error);
                }
            }
            else
            {
                if (target.length)
                {
#warning TO DO: write to file
                }
                else
                {
                    printf("%s\n",
                           [output.description cStringUsingEncoding: NSUTF8StringEncoding]);
                }
            }
        }
        else
        {
            Crit(nil);
        }
    }
    else
    {
        printf("%s is not a valid character sheet source.\n", [source cStringUsingEncoding: NSUTF8StringEncoding]);
        HuhP();
    }
}

void Stat(NSString* source,
          NSString* target)
{
    BeyondDnDSheet*     sheet   =   [BeyondDnDSheet fromCharacterURL: GetURLFrom(source)];
    NSString*           format  =   @""
    "--------------------------------------------------------------------------------\n"
    "Stats for %@ (LVL %d)\n"
    "At: %@\n"
    "--------------------------------------------------------------------------------\n"
    "STR %d (%d)\n"
    "CON %d (%d)\n"
    "DEX %d (%d)\n"
    "INT %d (%d)\n"
    "WIZ %d (%d)\n"
    "CHA %d (%d)\n"
    "\n"
    ;
    NSString*           output  =   [NSString stringWithFormat: format,
                                     sheet.name, sheet.level,
                                     source,
                                     sheet.STR, sheet.STR_mod,
                                     sheet.CON, sheet.CON_mod,
                                     sheet.DEX, sheet.DEX_mod,
                                     sheet.INT, sheet.INT_mod,
                                     sheet.WIZ, sheet.WIZ_mod,
                                     sheet.CHA, sheet.CHA_mod];
    
    if (target.length)
    {
        printf("will stat %s to %s\n",
               [source cStringUsingEncoding: NSUTF8StringEncoding],
               [(target ? GetURLFrom(source).absoluteString : @"screen") cStringUsingEncoding: NSUTF8StringEncoding]);
    }
    else
    {
        printf("%s", [output cStringUsingEncoding: NSUTF8StringEncoding]);
    }
    
    
}
