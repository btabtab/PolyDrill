#ifndef ABILITIES
#define ABILITIES
enum AbilityIDs
{	
	ABILITY_STRIPPED = -1, //for if something has had its ability removed.
	ABILITY_DETERMINED, // like Sturdy, cos it's determined to stay alive.
	ABILITY_REGENERATIVE, // heals when taken either out of battle or when it is put to sleep.
};
#endif