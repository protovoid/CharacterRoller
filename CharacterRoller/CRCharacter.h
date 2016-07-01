//
//  CRCharacter.h
//  CharacterRoller
//
//  Created by Chad on 8/10/15.
//  Copyright (c) 2015 Chad Williams. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRCharacter : NSObject

/*
 http://gamedevelopment.tutsplus.com/articles/balancing-turn-based-rpgs-party-members--gamedev-8964
 
base stats:
 Strength
 Speed
 Stamina
 Spirit
 Defense
 Magic Defense
 
derived stats:
 Attack Power
 Seconds Per Turn, or ATB Speed
 Dodge %
 Hit Points
 Magical Power
 Physical Damage Negated (%)
 Magical Damage Negated (%)
 
 
 Attack Power = (Strength * (constant)) +/- 10%
 Speed Coefficient = Speed / Level
 Seconds Per Turn = (constant) / Speed Coefficient
 Dodge (%) = Speed Coefficient * Constant
 
 warrior DPS = Attack Power / ATB Speed
 wizard DPS = Magical Power / ATB Speed
 
/*

@end
