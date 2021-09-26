#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H

#include "Infantry.h"

class Halberdier : public Infantry {
private:
    static std::string name;
public:
    Halberdier() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void protect() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_HALBERDIER_H
