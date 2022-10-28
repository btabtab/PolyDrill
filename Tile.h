#include <stdlib.h>
enum TILE_TYPE
{
	TILE_BLANK
};

/*
This class will be what makes up the map class.
*/
typedef struct Tile
{
	//enum to indicate purpose to conditional statements.
	int tile_type;
	//Data that the tile will need to hold onto or at least point to.
	void* data;
};

//function to easily overwrite / populate an existing tile.
Tile newTile(int n_tile_type, void* data_to_bind)
{
	Tile ret;
	ret.tile_type = TILE_BLANK;
	ret.data = NULL;
	return ret;
}
//returns a pointer so as to create a new one in memory.
Tile* allocateNewTile(int n_tile_type, void* data_to_bind)
{
	Tile* ret;
	ret = (Tile*)malloc(sizeof(Tile));
	ret->data = data_to_bind;
	ret->tile_type = n_tile_type;
	return ret;
}

/*Use this to create data for a tile to use. It is preffered that you
use [void bindTileData(Tile* tile, void* data)] instead as tiles ideally
shouldn't hold their own data as it may cause memory leaks.*/
void allocateTileData(Tile* tile, int size)
{
	tile->data = malloc(size);
}
/* Use this to bind data to a tile
note: this should be a runtime thing and not be done in a way that it is
expected to be saved (because pointers are a mess and I hate / love them).*/
void bindTileData(Tile* tile, void* data)
{
	tile->data = data;
}
//does what it says on the tin.
void killTileData(Tile* tile)
{
	free(tile->data);
}