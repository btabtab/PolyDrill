#ifndef STATS
#define STATS
typedef struct Stats
{
	int attack; // atk
	int defense; // def
	int energy; // sp.atk | how much energy damage is dealt
	int resistance; //sp.def | resistance to energy
	int speed; //who moves first
}
Stats;

int getBaseStatTotal(Stats stats)
{
	return (stats.attack + stats.defense + stats.energy + stats.resistance + stats.speed);
}

int getRaisedStatTotal(Stats stats, Stats stages)
{
	return (
	(stats.attack		* stages.attack)	 +
	(stats.defense		* stages.defense)	 +
	(stats.energy		* stages.energy)	 +
	(stats.resistance	* stages.resistance) +
	(stats.speed		* stages.speed)
	);
}
#endif