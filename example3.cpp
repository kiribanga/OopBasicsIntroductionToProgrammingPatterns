#include "Army/Factory/DefendedArmyFactory.h"

int example3() {
    auto *factory = new DefendedArmyFactory;
    auto *cavalier = factory->createCavalier();
    cavalier->fight();
    cavalier->charge();
    cavalier->move();
    return 0;
}

