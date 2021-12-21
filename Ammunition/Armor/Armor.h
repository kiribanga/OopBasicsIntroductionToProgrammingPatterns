#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMOR_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMOR_H

#include <iostream>
#include "../DamageType.h"

class Armor {
private:
    Armor() {
        std::cout << "Created armor" << std::endl;
    }

public:
    static int defend(int damage, DamageType damageType);
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMOR_H
