// StarCityHawaiianPizza.h

#ifndef _H_STARCITYHAWAIIANPIZZA
#define _H_STARCITYHAWAIIANPIZZA

#include <iostream>

#include "Pizza.h"
#include "IngredientsFactory.h"
#include "Sauce.h"
#include "Dough.h"
#include "Cheese.h"

using namespace std;

class StarCityHawaiianPizza : public Pizza {
	private:
		Cheese* cheese;
		Dough* dough;
		Sauce * sauce;
		IngredientsFactory* ingredientsFactory;
	public:
		StarCityHawaiianPizza(IngredientsFactory* ingredients) {
			this->ingredientsFactory = ingredients;
			cheese = nullptr;
			dough  = nullptr;
			sauce  = nullptr;
		}
		void prepare() {
			cout << "Adding ingredients..." << endl;

			dough  = ingredientsFactory->getDough();
			sauce  = ingredientsFactory->getSauce();
			cheese = ingredientsFactory->getCheese();

		}
		void bake() override {
			cout << "Baking at 210 F for 15 minutes" << endl;
		}

};

#endif
