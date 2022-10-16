#ifndef SPECIES
#define SPECIES

#include "Stats.h"

typedef struct Species
{
	int id;
	Stats stats;
	int type_A, type_B;
	int ability;
}
Species;

#endif