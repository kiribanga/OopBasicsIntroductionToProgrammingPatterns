#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H

#include "Infantry.h"

class Halberdier : public Infantry {
protected:
    char letter = 'H';
    char color = bright_grey;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const Armor *armor;
    static const Weapon *firstWeapon;
    static const Weapon *secondWeapon;

    Halberdier();
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H
