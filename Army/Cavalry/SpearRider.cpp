#include "SpearRider.h"

using namespace std;

const int SpearRider::speed = 3;
const int SpearRider::maxHealth = 15;
const int SpearRider::maxSize = 15;
const string SpearRider::name = "Spear rider";

SpearRider::SpearRider(){
    health = maxHealth;
    squadSize = maxSize;
}