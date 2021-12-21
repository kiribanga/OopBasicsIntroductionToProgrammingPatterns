#include "Map.h"
#include <cstdlib>

using namespace std;

Map::Map(int count, int x, int y) {
    maxCount = count;
    if (x <= 0)
        x = 10;
    length = x;
    if (y <= 0)
        y = x;
    height = y;
    field = new Unite **[x];
    for (int i = 0; i < x; i++){
        field[i] = new Unite *[y];
        for(int j = 0; j < y; j++)
            field[i][j]=nullptr;
    }
}

Map::~Map() {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < height; j++)
            delete field[i][j];
        delete[] field[i];
    }
    delete[] field;
}

void Map::createFusiliery(ArmyFactory *factory, int x, int y) {
    if ((x >= 0) && (x < length) && (y >= 0) && (y < height)) {
        auto unite = factory->createFusilier();
        if (field[x][y] != nullptr)
            delete field[x][y];
        field[x][y] = unite;
    } else {
        cout << "wrong index to new Unite" << endl;
    }
}

void Map::createInfantryman(ArmyFactory *factory, int x, int y) {
    if ((x >= 0) && (x < length) && (y >= 0) && (y < height)) {
        auto unite = factory->createInfantryman();
        if (field[x][y] != nullptr)
            delete field[x][y];
        field[x][y] = unite;
    } else {
        cout << "wrong index to new Unite" << endl;
    }
}

void Map::createCavalier(ArmyFactory *factory, int x, int y) {
    if ((x >= 0) && (x < length) && (y >= 0) && (y < height)) {
        auto unite = factory->createCavalier();
        if (field[x][y] != nullptr)
            delete field[x][y];
        field[x][y] = unite;
    } else {
        cout << "wrong index to new Unite" << endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Map &map) {
    system("cls");
    for (int i = -1; i <= map.length; i++)
        out << '*';
    out << endl;
    for (int i = 0; i < map.length; i++) {
        out << '*';
        for (int j = 0; j < map.height; j++)
            if (map.field[i][j] == nullptr)
                out << ' ';
            else
                out << *map.field[i][j];
        out << '*' << endl;
    }
    for (int i = -1; i <= map.length; i++)
        out << '*';
    out << endl << endl;
    return out;
}