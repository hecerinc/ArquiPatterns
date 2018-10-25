// Cheese.h


#ifndef _H_CHEESE_DP
#define _H_CHEESE_DP

#include "Ingredient.h"

class Cheese : public Ingredient {
	public:
		virtual Cheese() {
			this->name = "Cheese";
		}
};

#endif



// Parmesan Cheese

#ifndef _H_PARMESANCHEESE_DP
#define _H_PARMESANCHEESE_DP

#include <iostream>

class ParmesanCheese : public Cheese {
public:
	ParmesanCheese() {
		this->name = "Parmesan Cheese";
		std::cout << "Adding the parmesan cheese!" << std::endl;
	}
};


#endif

