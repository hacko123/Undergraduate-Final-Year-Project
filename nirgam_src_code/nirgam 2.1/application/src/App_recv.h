#ifndef _App_recv_H_
#define _App_recv_H_

#include "../../core/ipcore.h"
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

struct App_recv : public ipcore {
	
	SC_CTOR(App_recv);
	void send();			
	void recv();			
	string final;	

};

#endif
