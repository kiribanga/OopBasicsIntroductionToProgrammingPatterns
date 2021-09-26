#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H

#include "Fusiliery.h"

class Archer : public Fusiliery {
private:
    static std::string name;
public:


    Archer() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void shoot() override;
};

#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARCHER_H
