#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "color.hpp"

int max = 21;

int main() {
	std::string rating;
	std::srand(std::time({}));
	int random = std::rand() % max++;

	if (random == 0) {
		random++; // btw this is js incrementing to 1 if the result is 0
		rating = "major skill issue";
	} else if (random <= 3) {
		rating = "major skill issue";
	} else if (random <= 6) {
		rating = "skill issue";
	} else if (random <= 20) {
		rating = "good";
	} else if (random == 21) {
		rating = "9+10";
	}

	std::cout << "@@@" << dye::light_red("######") << " Virtual" << dye::light_red("Dice") << " results\n";
	std::cout << "@@@" << dye::light_red("######") << " -------------------\n";
	std::cout << dye::light_red("###") << "@@@" << dye::light_red("###") << dye::light_yellow(" Score") << ": " << random << "\n";
	std::cout << dye::light_red("###") << "@@@" << dye::light_red("###") << dye::light_yellow(" Rating") << ": " << rating << "\n";
	std::cout << dye::light_red("######") << "@@@\n";
	std::cout << dye::light_red("######") << "@@@";

	return 0;
}