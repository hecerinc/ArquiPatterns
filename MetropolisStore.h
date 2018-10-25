// MetropolisStore.h
#include "Pizza.h";
#include "PizzaStore.h";

#ifndef _H_METROPOLISTORE_DP

#define _H_METROPOLISTORE_DP

// Concrete implementation

class MetropolisStore : public PizzaStore {
	public:
		MetropolisStore() {
			this->city = "Metropolis";
		}

		Pizza * makePizza(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					return new MetropolisArtichokePizza();
				case PizzaType::HAWAIIAN:
					return new MetropolisHawaiianPizza();
				case PizzaType::CHEESE:
					return new MetropolisCheesePizza();
				case PizzaType::PEPPERONI:
					return new MetropolisPepperoniPizza();
			}
			return nullptr;
		}
};

#endif

