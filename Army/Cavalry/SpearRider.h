#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H

#include "Cavalry.h"

class SpearRider : public Cavalry {
private:
    static std::string name;
public:
    SpearRider() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void charge() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SPEARRIDER_H
