
#include "App_recv.h"
#include "../../config/extern.h"

App_recv::App_recv(sc_module_name App_recv): ipcore(App_recv)
{

}

void App_recv::send()
{
}

void App_recv::recv()
{
    string data;
    while (true)
    {
        wait();	
        if (flit_inport.event())
        {

            flit flit_recd = flit_inport.read();	
            flit_recd.simdata.atimestamp = sim_count;	
            flit_recd.simdata.atime = sc_time_stamp();	
	   
            cout<<"\ntime: "<<sc_time_stamp()<<" name: "<<this->name()<<" tile: "<<tileID<<" Recieved flit at core "<<flit_recd;
            
        }
    }
}

extern "C"
{
    ipcore *maker()
    {
        return new App_recv("App_recv");
    }
}
