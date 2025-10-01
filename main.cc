#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "color.hpp"

int main() {
	int max;
	std::cout << "Set the number limit here: ";
	std::cin >> max;
	std::cout << "\n";

	int rmax = max+1;
	std::srand(std::time({}));
	int random = std::rand() % rmax;

	if (random == 0) {
		random++; // btw this is js incrementing to 1 if the result is 0
	}

	std::cout << "@@@" << dye::light_red("######") << " Virtual" << dye::light_red("Dice") << " results\n";
	std::cout << "@@@" << dye::light_red("######") << " -------------------\n";
	std::cout << dye::light_red("###") << "@@@" << dye::light_red("###") << dye::light_yellow(" Score") << ": " << random << "\n";
	std::cout << dye::light_red("###") << "@@@" << dye::light_red("###") << dye::light_yellow(" Maximum score") << ": " << max << "\n";
	std::cout << dye::light_red("######") << "@@@\n";
	std::cout << dye::light_red("######") << "@@@";

	return 0;
}
