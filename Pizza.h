// Pizza.h

#include <string>

// << abstract >>
#ifndef _H_PIZZA_DP

#define _H_PIZZA_DP

enum class PizzaType {
	ARTICHOKE,
	HAWAIIAN,
	CHEESE,
	PEPPERONI
};

class Pizza {
	public:
		static std::string getType(PizzaType type) {
			switch(type) {
				case PizzaType::ARTICHOKE:
					return "Artichoke";
				case PizzaType::HAWAIIAN:
					return "Hawaiian";
				case PizzaType::CHEESE:
					return "Cheese";
				case PizzaType::PEPPERONI:
					return "Pepperoni";
			}
			return "INVALID";
		}
		//virtual void add(Ingredient) = 0;
		virtual void prepare() = 0; // TODO: change this
		virtual void bake() {
			std::cout << "The default bake function from Pizza" << std::endl;
		}
		virtual void slice() {
			std::cout << "The default slice function from Pizza" << std::endl;
		}
		virtual void box() {
			std::cout << "The default slice function from Pizza" << std::endl;
		}
};

#endif

