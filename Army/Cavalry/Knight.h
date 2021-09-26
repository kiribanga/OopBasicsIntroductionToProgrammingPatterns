#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H

#include "Cavalry.h"

class Knight : public Cavalry {
private:
    static std::string name;
public:
    Knight() {
        health = 15;
        damage = 15;
        armor = 5;
        speed = 3;
    }

    void move() override;

    void fight() override;

    void charge() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_KNIGHT_H
