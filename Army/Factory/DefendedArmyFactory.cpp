#include "DefendedArmyFactory.h"

DefendedArmyFactory::DefendedArmyFactory(){}

Halberdier *DefendedArmyFactory::createInfantryman(){
    return new Halberdier;
}

Arbalester *DefendedArmyFactory::createFusilier() {
    return new Arbalester;
}

Knight *DefendedArmyFactory::createCavalier() {
    return new Knight;
}