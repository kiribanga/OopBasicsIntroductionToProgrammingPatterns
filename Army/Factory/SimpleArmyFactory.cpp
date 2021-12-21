#include "SimpleArmyFactory.h"

SimpleArmyFactory::SimpleArmyFactory(){}

Warrior *SimpleArmyFactory::createInfantryman() {
    return new Warrior;
}

Archer *SimpleArmyFactory::createFusilier() {
    return new Archer;
}

SpearRider *SimpleArmyFactory::createCavalier() {
    return new SpearRider;
}
