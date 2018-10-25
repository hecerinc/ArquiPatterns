// StarCityIngredientsFactory.h

#ifndef _H_STARCITYINGREDIENTSFACTORY_DP
#define _H_STARCITYINGREDIENTSFACTORY_DP

#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"

class StarCityIngredientsFactory : public IngredientsFactory { // implements IngredientsFactory
	public:
		Dough* getDough()  {
			return new CheeseFilledDough();
		}
		Sauce* getSauce() {
			return new BuffaloSauce();
		}
		Cheese* getCheese() {
			return new ParmesanCheese();
		}

};

#endif

