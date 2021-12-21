#include "Warrior.h"

using namespace std;

const int Warrior::speed = 3;
const int Warrior::maxHealth = 15;
const int Warrior::maxSize = 20;
const string Warrior::name = "Warrior";

Warrior::Warrior(){
    health = maxHealth;
    squadSize = maxSize;
}