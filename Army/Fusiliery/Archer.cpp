#include "Archer.h"

using namespace std;

const int Archer::speed = 3;
const int Archer::maxHealth = 15;
const int Archer::maxSize = 10;
const std::string Archer::name = "Archer";

Archer::Archer() {
    health = maxHealth;
    squadSize = maxSize;
    letter = 'A';
    color = bright_cyan;
}