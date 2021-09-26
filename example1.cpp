#include "Army/Factory/SimpleArmyFactory.h"

int example1() {
    auto *factory = new SimpleArmyFactory;
    auto *warrior = factory->createInfantryman();
    warrior->fight();
    warrior->protect();
    warrior->move();
    return 0;
}