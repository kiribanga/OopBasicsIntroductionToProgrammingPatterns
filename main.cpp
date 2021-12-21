#include <iostream>
#include <cstdlib>
#include "Army/Factory/SimpleArmyFactory.h"
#include "Army/Factory/DefendedArmyFactory.h"
#include "Terrain/Map.h"
#include "termcolor/termcolor.hpp"

using namespace std;

int main() {
    auto attack = new SimpleArmyFactory();
    auto defend = new DefendedArmyFactory();

    auto map = new Map(15, 4);
    cout << *map;
    map->createCavalier(attack, 0, 1);
    cout << *map;
    map->createInfantryman(attack, 0, 3);
    cout << *map;
    map->createFusiliery(attack, 1, 1);
    cout << *map;

    system("pause");

    map->createCavalier(defend, 2, 1);
    cout << *map;
    map->createInfantryman(defend, 2, 3);
    cout << *map;
    map->createFusiliery(defend, 3, 3);
    cout << *map;

    auto *chr = attack->createFusilier();
    cout << *chr << endl;

    system("pause");

    return 0;
}