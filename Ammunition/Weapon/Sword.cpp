#include "Sword.h"
#include <cstdlib>

const int Sword::power = 6;
Handed Sword::handed = one_handed;
DamageType Sword::damageType = cutting;

int Sword::attack(int size){
    int damage = 0;
    for(int i=0;i<size;i++)
        damage+=power+rand()%3-1;

    return damage;
}
