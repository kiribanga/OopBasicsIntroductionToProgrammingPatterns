#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H

#include <iostream>
#include <string>
#include "../Ammunition/Armor/Armor.h"
#include "../Ammunition/Weapon/Weapon.h"

enum Color {
    grey, red, green, yellow, blue, magenta, cyan, white, bright_grey, bright_red, bright_green, bright_yellow, bright_blue, bright_magenta, bright_cyan, bright_white
};

class Unite {
protected:
    int squadSize;
    int health;
    char letter;
    Color color;
public:
    static const int speed;
    static const int maxHealth;
    static const int maxSize;
    static const std::string name;
    static const Armor *armor;
    static const Weapon *firstWeapon;
    static const Weapon *secondWeapon;

    virtual void move() final;

    virtual void fight(Unite*) final;

    virtual int fight(int) final;

    friend std::ostream &operator<<(std::ostream &out, const Unite &unite);
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H
