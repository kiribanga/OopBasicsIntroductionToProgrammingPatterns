#include "Halberdier.h"

using namespace std;

const int Halberdier::speed = 3;
const int Halberdier::maxHealth = 15;
const int Halberdier::maxSize = 15;
const string Halberdier::name = "Halberdier";

Halberdier::Halberdier(){
    health = maxHealth;
    squadSize = maxSize;
}