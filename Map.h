#ifndef MAP
#define MAP

typedef struct Map
{
    /*
    This should be randomly generated each time
    a new Map is created (should)
    */
    int ID;
}
Map;

Map* getCurrentMap()
{
    static Map ret;
    return &ret;
}
#endif