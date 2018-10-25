// CentralCityStore.h
#include "Pizza.h"
#include "PizzaStore.h"
#include "CentralCityArtichokePizza.h"

#ifndef _H_CENTRALCITYSTORE_DP

#define _H_CENTRALCITYSTORE_DP

// Concrete implementation

class CentralCityStore : public PizzaStore {
	public:
		CentralCityStore() {
			this->city = "Central City";
		}

		Pizza * makePizza(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					return new CentralCityArtichokePizza();
//				case PizzaType::HAWAIIAN:
//					return new CentralCityHawaiianPizza();
//				case PizzaType::CHEESE:
//					return new CentralCityCheesePizza();
//				case PizzaType::PEPPERONI:
//					return new CentralCityPepperoniPizza();
			}
			return nullptr;
		}
};

#endif

