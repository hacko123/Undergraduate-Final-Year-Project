#ifndef _App_send_H_
#define _App_send_H_

#include "../../core/ipcore.h"
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

struct App_send : public ipcore {
	

	SC_CTOR(App_send);
	void send();			
	void recv();			
	void processing(flit);		
	
};

#endif
