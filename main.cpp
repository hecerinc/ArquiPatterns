// main.cpp
#include <iostream>
#include <string>
#include "Pizza.h"
#include "CentralCityStore.h"

using namespace std;

int main() {
	PizzaStore * metropolis_store = new CentralCityStore();
	Pizza * mypizza = metropolis_store->orderPizza(PizzaType::ARTICHOKE);

	delete mypizza;
	delete metropolis_store;
}

