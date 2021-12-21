#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H

#include "Fusiliery.h"

class Arbalester : public Fusiliery {
protected:
    char letter = 'A';
    char color = bright_yellow;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const Armor* armor;
    static const Weapon* firstWeapon;
    static const Weapon* secondWeapon;

    Arbalester();
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H
