#include "SimpleArmyFactory.h"
#include "../Fusiliery/Archer.h"
#include "../Infantry/Warrior.h"
#include "../Cavalry/SpearRider.h"
#include <iostream>

using namespace std;

Fusiliery *SimpleArmyFactory::createFusilier() {
    return new Archer;
}

Infantry *SimpleArmyFactory::createInfantryman() {
    return new Warrior;
}

Cavalry *SimpleArmyFactory::createCavalier() {
    return new SpearRider;
}
