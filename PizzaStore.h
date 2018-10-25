// PizzaStore.h
#include <iostream>
#include <string>

#include "Pizza.h"

#ifndef _H_PIZZASTORE_DP

#define _H_PIZZASTORE_DP

using namespace std;

// << abstract >> 
class PizzaStore {

	protected:
		string city;

	public:
		// Factory Method
		virtual Pizza * makePizza(PizzaType) = 0;

		Pizza * orderPizza(PizzaType type) {

			cout << this->city << ": Preparando una pizza " << Pizza::getType(type) << endl;
			Pizza * p = makePizza(type);
			p->prepare();
			p->bake();
			p->slice();
			p->box();

			return p;
		}

};

#endif

