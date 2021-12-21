#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H

#include "Cavalry.h"

class SpearRider : public Cavalry {
protected:
    char letter = 'S';
    char color = blue;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const Armor *armor;
    static const Weapon *firstWeapon;
    static const Weapon *secondWeapon;

    SpearRider();
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H
