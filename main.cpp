#include <iostream>
#include "allclasses.h"

int main() {
    Warrior w;
    Rogue r;
    Cleric c;
    Wizard wiz;

    std::cout << "Warrior:" << std::endl;
    std::cout << "Max HP: " << w.getMaxHP() << std::endl;
    std::cout << "Strength: " << w.getStrength() << std::endl;
    std::cout << "Intellect: " << w.getIntellect() << std::endl;
    std::cout << std::endl;

    std::cout << "Rogue:" << std::endl;
    std::cout << "Max HP: " << r.getMaxHP() << std::endl;
    std::cout << "Strength: " << r.getStrength() << std::endl;
    std::cout << "Intellect: " << r.getIntellect() << std::endl;
    std::cout << std::endl;

    std::cout << "Cleric:" << std::endl;
    std::cout << "Max HP: " << c.getMaxHP() << std::endl;
    std::cout << "Strength: " << c.getStrength() << std::endl;
    std::cout << "Intellect: " << c.getIntellect() << std::endl;
    std::cout << std::endl;

    std::cout << "Wizard:" << std::endl;
    std::cout << "Max HP: " << wiz.getMaxHP() << std::endl;
    std::cout << "Strength: " << wiz.getStrength() << std::endl;
    std::cout << "Intellect: " << wiz.getIntellect() << std::endl;
    std::cout << std::endl;

    return 0;
}