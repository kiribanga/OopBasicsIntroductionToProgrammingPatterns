#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H

#include "Infantry.h"

class Warrior : public Infantry {
private:
    static std::string name;
public:
    Warrior() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void protect() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_WARRIOR_H
