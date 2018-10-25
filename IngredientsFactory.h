// IngredientsFactory.h

#ifndef _H_INGREDIENTSFACTORY_DP
#define _H_INGREDIENTSFACTORY_DP

#include "Dough.h"
#include "Cheese.h"
#include "Sauce.h"

// << interface >>
class IngredientsFactory {
	public:
		virtual ~IngredientsFactory(){};
		virtual Dough* getDough() = 0;
		virtual Sauce* getSauce() = 0;
		virtual Cheese* getCheese() = 0;

};

#endif

