// GothamStore.h
#include "Pizza.h";
#include "PizzaStore.h";

#ifndef _H_GOTHAMSTORE_DP

#define _H_GOTHAMSTORE_DP

// Concrete implementation

class GothamStore : public PizzaStore {
	public:
		GothamStore() {
			this->city = "Gotham";
		}

		Pizza * makePizza(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					return new GothamArtichokePizza();
				case PizzaType::HAWAIIAN:
					return new GothamHawaiianPizza();
				case PizzaType::CHEESE:
					return new GothamCheesePizza();
				case PizzaType::PEPPERONI:
					return new GothamPepperoniPizza();
			}
			return nullptr;
		}
};

#endif
