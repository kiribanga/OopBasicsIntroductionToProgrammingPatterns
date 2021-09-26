#include "DefendedArmyFactory.h"
#include "../Fusiliery/Arbalester.h"
#include "../Infantry/Halberdier.h"
#include "../Cavalry/Knight.h"
#include <iostream>

using namespace std;

Fusiliery *DefendedArmyFactory::createFusilier() {
    return new Arbalester;
}

Infantry *DefendedArmyFactory::createInfantryman() {
    return new Halberdier;
}

Cavalry *DefendedArmyFactory::createCavalier() {
    return new Knight;
}