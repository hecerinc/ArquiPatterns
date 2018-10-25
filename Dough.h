// Dough.h

#ifndef _H_DOUGH_DP
#define _H_DOUGH_DP

#include "Ingredient.h"

class Dough : public Ingredient {
	public:
		virtual Dough() {
			this->name = "Dough";
		}
};

#endif



// Cheese Filled Dough!

#ifndef _H_CHEESEFILLEDDOUGH_DP
#define _H_CHEESEFILLEDDOUGH_DP

#include <iostream>

class CheeseFilledDough : public Dough {
public:
	CheeseFilledDough() {
		this->name = "Cheese Filled Dough";
		std::cout << "Preparing the cheese filled dough!" << std::endl;
	}
};


#endif

