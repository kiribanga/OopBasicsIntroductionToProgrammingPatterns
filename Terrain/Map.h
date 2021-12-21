#ifndef OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_MAP_H
#define OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_MAP_H

#include <iostream>
#include "../Army/Factory/ArmyFactory.h"

class Map {
private:
    Unite ***field;
    int maxCount;
    int length;
    int height;
public:
    Map(int count, int x, int y = -1);

    ~Map();

    void createFusiliery(ArmyFactory *factory, int x, int y);

    void createInfantryman(ArmyFactory *factory, int x, int y);

    void createCavalier(ArmyFactory *factory, int x, int y);

    friend std::ostream &operator<<(std::ostream &out, const Map &map);
};


#endif //OOPBASICSINTRODUCTIONTOPROGRAMMINGPATTERNS_MAP_H
