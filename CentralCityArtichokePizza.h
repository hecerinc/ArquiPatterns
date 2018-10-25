// CentralCityArtichokePizza.h
#ifndef _H_CENTRALCITYARTICHOKEPIZZA
#define _H_CENTRALCITYARTICHOKEPIZZA

#include <iostream>

#include "Pizza.h"

using namespace std;

class CentralCityArtichokePizza : public Pizza {
	public:
		void prepare() {
			cout << "Preparing Central City Artichoke pizza!" << endl;
		}
		void bake() override {
			cout << "Baking at 410 F for 25 minutes" << endl;
		}

};

#endif 

