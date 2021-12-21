#include "Knight.h"

using namespace std;

const int Knight::speed = 5;
const int Knight::maxHealth = 15;
const int Knight::maxSize = 15;
const string Knight::name = "Knight";

Knight::Knight(){
    health = maxHealth;
    squadSize = maxSize;
}