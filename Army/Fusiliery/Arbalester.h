#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H

#include "Fusiliery.h"

class Arbalester : public Fusiliery {
private:
    static std::string name;
public:
    Arbalester() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void shoot() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARBALESTER_H
