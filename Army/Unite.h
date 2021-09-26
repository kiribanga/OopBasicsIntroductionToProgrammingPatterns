#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H

#include <iostream>
#include <string>

class Unite {
protected:
    int armor;
    int health;
    int damage;
    int speed;
    static std::string name;
public:
    virtual void move() = 0;

    virtual void fight() = 0;

    friend std::ostream &operator<<(std::ostream &out, const Unite &unite){
        out<<' ';
    };
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_UNITE_H
