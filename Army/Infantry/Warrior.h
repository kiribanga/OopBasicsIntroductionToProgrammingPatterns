#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H

#include "Infantry.h"
#include "../../Ammunition/Armor/ChainArmor.h"
#include "../../Ammunition/Weapon/Sword.h"

class Warrior : public Infantry {
protected:
    char letter = 'W';
    char color = red;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const ChainArmor *armor;
    static const Sword *firstWeapon;
    static const Sword *secondWeapon;

    Warrior();
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H
