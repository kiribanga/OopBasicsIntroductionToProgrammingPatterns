#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMYFACTORY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMYFACTORY_H

#include "../Infantry/Infantry.h"
#include "../Fusiliery/Fusiliery.h"
#include "../Cavalry/Cavalry.h"

class ArmyFactory {
public:
    virtual Infantry *createInfantryman() = 0;

    virtual Fusiliery *createFusilier() = 0;

    virtual Cavalry *createCavalier() = 0;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_ARMYFACTORY_H
