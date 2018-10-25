// main.cpp
#include <iostream>
#include <string>
#include "Pizza.h"
// #include "CentralCityStore.h"
#include "StarCityStore.h"

using namespace std;

int main() {
	PizzaStore * store = new StarCityStore();
	Pizza * mypizza = store->orderPizza(PizzaType::HAWAIIAN);

	delete mypizza;
	delete store;
}

