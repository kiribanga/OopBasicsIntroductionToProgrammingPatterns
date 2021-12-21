#include "Arbalester.h"

using namespace std;

const int Arbalester::speed = 3;
const int Arbalester::maxHealth = 19;
const int Arbalester::maxSize = 10;
const std::string Arbalester::name = "Arbalester";

Arbalester::Arbalester(){
    health = maxHealth;
    squadSize = maxSize;
}