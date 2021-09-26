#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H

#include "ArmyFactory.h"

class DefendedArmyFactory : public ArmyFactory {
private:

public:
    Infantry *createInfantryman() override;

    Fusiliery *createFusilier() override;

    Cavalry *createCavalier() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H
