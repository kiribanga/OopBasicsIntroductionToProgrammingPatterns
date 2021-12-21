#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H

#include "ArmyFactory.h"
#include "../Infantry/Halberdier.h"
#include "../Fusiliery/Arbalester.h"
#include "../Cavalry/Knight.h"

class DefendedArmyFactory : public ArmyFactory {
public:
    DefendedArmyFactory();

    Halberdier *createInfantryman() override;

    Arbalester *createFusilier() override;

    Knight *createCavalier() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_DEFENDEDARMYFACTORY_H
