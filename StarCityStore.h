// StarCityStore.h
#include "Pizza.h";
#include "PizzaStore.h";

#ifndef _H_STARCITYSTORE_DP

#define _H_STARCITYSTORE_DP

// Concrete implementation

class StarCityStore : public PizzaStore {
	public:
		StarCityStore() {
			this->city = "Star City";
		}

		Pizza * makePizza(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					return new StarCityArtichokePizza();
				case PizzaType::HAWAIIAN:
					return new StarCityHawaiianPizza();
				case PizzaType::CHEESE:
					return new StarCityCheesePizza();
				case PizzaType::PEPPERONI:
					return new StarCityPepperoniPizza();
			}
			return nullptr;
		}
};

#endif

