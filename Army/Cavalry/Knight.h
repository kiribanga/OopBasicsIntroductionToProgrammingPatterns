#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H

#include "Cavalry.h"

class Knight : public Cavalry {
protected:
    char letter = 'K';
    char color = bright_green;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const Armor *armor;
    static const Weapon *firstWeapon;
    static const Weapon *secondWeapon;

    Knight();
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H
