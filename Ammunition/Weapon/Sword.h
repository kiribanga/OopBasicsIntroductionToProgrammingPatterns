#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SWORD_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SWORD_H

#include "Weapon.h"

class Sword {
private:
    Sword() {
        std::cout << "Sword created" << std::endl;
    }
public:
    static const int power;
    static Handed handed;
    static DamageType damageType;

    static int attack(int size);
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SWORD_H
