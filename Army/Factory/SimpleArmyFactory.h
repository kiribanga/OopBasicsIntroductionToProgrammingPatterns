#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H

#include "ArmyFactory.h"
#include "../Infantry/Warrior.h"
#include "../Fusiliery/Archer.h"
#include "../Cavalry/SpearRider.h"

class SimpleArmyFactory : public ArmyFactory {
public:
    SimpleArmyFactory();

    Warrior *createInfantryman() override;

    Archer *createFusilier() override;

    SpearRider *createCavalier() override;
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_SIMPLEARMYFACTORY_H
