//
//  DnDBCharacter.m
//  TheeEndThee
//
//  Created by Martin-Gilles Lavoie on 2020-11-14.
//  Copyright © 2020 DoRyu. All rights reserved.
//

#import "DnDBCharacter.h"

@implementation DnDBCharacter

- (void) setValue: (id) value
           forKey: (NSString*) key
{
    if ([key isEqualToString: @"defaultBackdrop"])
    {
        _defaultBackdrop = DnDBDefaultBackdrop.new;
        
        [self.defaultBackdrop setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"id"])
    {
        [super setValue: value
                 forKey: @"id_entification"];
    }
    else if ([key isEqualToString: @"classes"])
    {
        _classes = [DnDBClass classesFrom: value];
    }
    else if ([key isEqualToString: @"stats"])
    {
        _stats = [DnDBStat statBlockWith: value];
    }
    else if ([key isEqualToString: @"bonusStats"])
    {
        _bonusStats = [DnDBStat statBlockWith: value];
    }
    else if ([key isEqualToString: @"overrideStats"])
    {
        _overrideStats = [DnDBStat statBlockWith: value];
    }
    else if ([key isEqualToString: @"inventory"])
    {
        _inventory = [DnDBInventoryItem inventoryFrom: value];
    }
    else if ([key isEqualToString: @"campaign"])
    {
        _campaign    =   DnDBCampaign.new;
        
        [self.campaign setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"modifiers"])
    {
        _modifiers  =   DnDBModifiers.new;
        
        [self.modifiers setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"DnDBCurrencies"])
    {
        _currencies = DnDBCurrencies.new;
        
        [self.currencies setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"race"])
    {
        _race = DnDBRace.new;
        
        [self.race setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"themeColor"])
    {
        _themeColor = DnDBThemeColor.new;
        
        [self.themeColor setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"characterValues"])
    {
        _characterValues =  [DnDBCharacterValue valuesFrom: value];
    }
    else if ([key isEqualToString: @"deathSaves"])
    {
        _deathSaves =  DnDBDeathSaves.new;
        
        [self.deathSaves setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"spellSlots"])
    {
        _spellSlots =  [DnDBSpellSlot slotsFrom: value];
    }
    else if ([key isEqualToString: @"background"])
    {
        _background =  DnDBBackground.new;
        
        [self.background setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"notes"])
    {
        _notes =  DnDBNotes.new;
        
        [self.notes setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"traits"])
    {
        _traits =  DnDBCharacterTraits.new;
        
        [self.traits setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"preferences"])
    {
        _preferences =  DnDBCharacterPreferences.new;
        
        [self.preferences setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"spells"])
    {
        _spells =  DnDBSpells.new;
        
        [self.spells setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"options"])
    {
        _options =  DnDBCharacterOptions.new;
        
        [self.options setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"classSpells"])
    {
        _classSpells =  [DnDBCharacterClassSpells classSpellsFrom: value];
    }
    else if ([key isEqualToString: @"choices"])
    {
        _choices =  [DnDBCharacterChoices new];
        
        [self.choices setValuesForKeysWithDictionary: value];
    }
    else if ([key isEqualToString: @"actions"])
    {
        _actions =  [DnDBCharacterActions new];
        
        [self.actions setValuesForKeysWithDictionary: value];
    }
    else
    {
        [super setValue: value
                 forKey: key];
    }
    
}

@end
