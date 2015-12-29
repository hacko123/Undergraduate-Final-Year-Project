#include "YX_router.h"
#include "../../config/extern.h"

void YX_router::setID(UI id_tile)
{
    id = id_tile;
    initialize();
}

UI YX_router::calc_next_ftxy(UI ip_dir, ULL source_id, ULL dest_id)
{

    int xco = id / num_cols;
    int yco = id % num_cols;
    int dest_xco = dest_id / num_cols;
    int dest_yco = dest_id % num_cols;
    if (dest_xco > xco)
        return S;
    else if (dest_xco < xco)
        return N;
    else if (dest_xco == xco)
    {
        if (dest_yco < yco)
            return W;
        else if (dest_yco > yco)
            return E;
        else if (dest_yco == yco)
            return C;
    }
    return 0;

}

void YX_router::initialize()
{

}
extern "C"
{
    router *maker()
    {
        return new YX_router;
    }
}




