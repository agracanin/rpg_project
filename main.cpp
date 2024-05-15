#include <iostream>
#include "allclasses.h"

int main() {
    Cleric c;

	for(int i = 0; i < 2; i++){
		std::cout << "Cleric:\n"
			<< "-MaxHP: " << c.getMaxHP() << "\n"
			<< "-Strength: " << c.getStrength() << "\n"
			<< "-Intellect: " << c.getIntellect() << "\n"
			<< "-Level: " << c.getLevel() << "\n"
			<< "-Experience: " << c.getCurrentEXP() << "\n"
			<< "-Experience to next level: " << c.getEXPToNextLevel() << "\n";
			c.gainEXP(100u);
    }

    
    return 0;
}