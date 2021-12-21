#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H

#include "Fusiliery.h"
#include "../../Ammunition/Armor/LeatherArmor.h"
#include "../../Ammunition/Weapon/Sword.h"

class Archer : public Fusiliery {
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const LeatherArmor *armor;
    static const Weapon *firstWeapon;
    static const Sword *secondWeapon;

    Archer();
};

#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H
