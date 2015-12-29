
#ifndef __YX_router__
#define __YX_router__

#include "../../core/router.h"

class YX_router : public router {
	public:
		YX_router() { }
		UI calc_next_ftxy(UI ip_dir, ULL source_id, ULL dest_id);
		UI calc_next_ftyx(UI ip_dir, ULL source_id, ULL dest_id);
		
		void initialize();
		void setID(UI tileid);

		UI get_estimate(UI){}
		void update_estimate(UI,UI,UI,ULL){}
		void update_power(int,double ){};
};

#endif




