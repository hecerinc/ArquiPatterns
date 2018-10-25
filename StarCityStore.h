// StarCityStore.h
#include "Pizza.h"
#include "PizzaStore.h"

#ifndef _H_STARCITYSTORE_DP

#define _H_STARCITYSTORE_DP


#include "StarCityHawaiianPizza.h"
#include "StarCityIngredientsFactory.h"

// Concrete implementation

class StarCityStore : public PizzaStore {
	private:
		IngredientsFactory* ingredientsFactory;
	public:
		StarCityStore() {
			this->city = "Star City";
			this->ingredientsFactory = new StarCityIngredientsFactory();
		}

		Pizza * makePizza(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					// return new StarCityArtichokePizza(this->ingredientsFactory);
				case PizzaType::HAWAIIAN:
					return new StarCityHawaiianPizza(this->ingredientsFactory);
				case PizzaType::CHEESE:
					// return new StarCityCheesePizza(this->ingredientsFactory);
				case PizzaType::PEPPERONI:
					// return new StarCityPepperoniPizza(this->ingredientsFactory);
					return nullptr;
			}
			return nullptr;
		}
};

#endif

