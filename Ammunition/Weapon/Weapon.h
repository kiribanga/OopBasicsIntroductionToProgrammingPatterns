#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WEAPON_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WEAPON_H

#include <iostream>
#include "../DamageType.h"

enum Handed {
    one_handed, two_handed, ranged
};

class Weapon {
private:
    Weapon() {
        std::cout << "Weapon created" << std::endl;
    }

public:
    static const int power;
    static Handed handed;
    static DamageType damageType;

    static int attack(int size);
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WEAPON_H
