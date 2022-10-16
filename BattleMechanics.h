#ifndef BATTLE_MECHANICS
#define BATTLE_MECHANICS
/*
The battle mechanics will revolve around 2 monsters on either side.

They will have up to 3 attack slots and will be able to use 1 a turn.
The goal is to have a more dynamic and interesting battle space,
think a mix of pokemon BW2's spritework and animation with the framing
of typical fighting games.
*/

#include "Species.h"
#include "Stats.h"
#include "TypeMechanics.h"
#include "SkillEffects.h"

enum Catagory
{
	CATEGORY_PHYSICAL,
	CATEGORY_MAGIC,
	CATEGORY_STATUS,
	CATEGORY_ULTIMATE
};

typedef struct Skill
{
	int type;
	int power;
	//can have up to 3 behaviours.
	int behaviour_ID[3];
	int priority;
	int catagory;
}
Skill;

typedef struct Battler
{
	Species species;
	Stats stages;
}
Battler;

int executeEffect(Skill attack, Battler attacker, Battler defender)
{
}

int calculateDamage(Skill attack, Battler attacker, Battler defender)
{
	return attack.power;
}
#endif