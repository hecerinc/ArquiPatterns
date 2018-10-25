// Sauce.h


#ifndef _H_SAUCE_DP
#define _H_SAUCE_DP

#include "Ingredient.h"

class Sauce : public Ingredient {
	public:
		Sauce() {
			this->name = "Sauce";
		}
};

#endif



// Buffalo Sauce

#ifndef _H_BUFFALOSAUCE_DP
#define _H_BUFFALOSAUCE_DP

#include <iostream>

class BuffaloSauce : public Sauce {
public:
	BuffaloSauce() {
		this->name = "Buffalo Sauce";
		std::cout << "Adding the buffalo sauce!" << std::endl;
	}
};


#endif

