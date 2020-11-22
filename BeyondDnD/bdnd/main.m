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

// Le 'self' cmd line name!
NSString*   selfe   =   nil;

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSMutableDictionary*    params =   NSMutableDictionary.new;
        
        params[@"dict"] = @(NO);
        
        for (NSInteger argIndex = 0; argIndex < argc; argIndex++)
        {
            const char* cArg    =   argv[argIndex];
            
            if (argIndex == 0)
            {
                selfe   =   [[[NSString alloc] initWithCString: cArg encoding: NSUTF8StringEncoding] lastPathComponent];
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
                        break;
                    }
                    else if ([anArg isEqualToString: @"dict"])
                    {
                        params[@"dict"] = @(YES);
                    }
                    else
                    {
                        if (argIndex < argc)
                        {
                            argIndex++;
                            cArg    =   argv[argIndex];
                            
                            NSString* param = [[NSString alloc] initWithCString: cArg
                                                                       encoding: NSUTF8StringEncoding];
                            
                            params[anArg] = param;
                        }
                        else
                        {
                            HuhP();
                            break;
                        }
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

void HuhP(void)
{
    printf("You CRIT\nTry %s -help", [selfe cStringUsingEncoding: NSUTF8StringEncoding]);
    exit(-1);
}

void Crit(NSError* error)
{
    if (error)
    {
        printf("%s", [error.description cStringUsingEncoding: NSUTF8StringEncoding]);
    }
    
    printf("Counterspelled! That didn't work. \nTry %s -help", [selfe cStringUsingEncoding: NSUTF8StringEncoding]);
    
    exit(-1);
}

void Conjure(NSDictionary* invocations)
{
    NSNumber*   dict            =   invocations[@"dict"];
    BOOL        asDictionary    =   dict.boolValue;
    NSString*   dump            =   invocations[@"dump"];
    NSString*   target          =   invocations[@"dump"];
    NSString*   stat            =   invocations[@"dump"];
    
    if (stat.length)
    {
        Stat(dump, target);
    }
    else if (dump.length)
    {
        Dump(dump, target, asDictionary);
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
           [selfe cStringUsingEncoding: NSUTF8StringEncoding],
           KVERSION);
}

void Dump(NSString* source,
          NSString* target,
          BOOL asDictionary)
{
    //...
    if ([BeyondDnDSheet isCharacterPage: source])
    {
        NSError*    error       =   nil;
        NSURL*      earl        =   [NSURL URLWithString: source];
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
                [output.description writeToURL: [NSURL URLWithString: target]
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
                printf("%s\n",
                       [output.description cStringUsingEncoding: NSUTF8StringEncoding]);
            }
        }
        else
        {
            Crit(nil);
        }
    }
    else
    {
        printf("%s is not a valid character sheet source.\n", source);
        HuhP();
    }
}

void Stat(NSString* source,
          NSString* target)
{
    
}
