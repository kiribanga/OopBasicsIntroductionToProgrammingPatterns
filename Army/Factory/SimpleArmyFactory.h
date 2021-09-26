#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H

#include "ArmyFactory.h"

class SimpleArmyFactory : public ArmyFactory {
private:

public:
    Infantry *createInfantryman() override;

    Fusiliery *createFusilier() override;

    Cavalry *createCavalier() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H
