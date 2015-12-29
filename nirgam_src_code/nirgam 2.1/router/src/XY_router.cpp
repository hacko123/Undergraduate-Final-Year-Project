#include "XY_router.h"
#include "../../config/extern.h"

void XY_router::setID(UI id_tile)
{
    id = id_tile;
    initialize();
}

UI XY_router::calc_next_ftxy(UI ip_dir, ULL source_id, ULL dest_id)
{
    int xco = id / num_cols;
    int yco = id % num_cols;
    int dest_xco = dest_id / num_cols;
    int dest_yco = dest_id % num_cols;
    if (dest_yco > yco)
        return E;
    else if (dest_yco < yco)
        return W;
    else if (dest_yco == yco)
    {
        if (dest_xco < xco)
            return N;
        else if (dest_xco > xco)
            return S;
        else if (dest_xco == xco)
            return C;
    }
    return 0;
}

UI XY_router::calc_next_ftyx(UI ip_dir, ULL source_id, ULL dest_id)
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


void XY_router::initialize()
{

}
extern "C"
{
    router *maker()
    {
        return new XY_router;
    }
}




