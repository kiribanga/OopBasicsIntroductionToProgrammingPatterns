#include "SpearRider.h"
#include <iostream>

using namespace std;

string SpearRider::name = "Spear rider";

void SpearRider::move() {
    cout << name << " moves on" << endl;
}

void SpearRider::fight() {
    cout << name << " fights" << endl;
}

void SpearRider::charge() {
    cout << name << " charges" << endl;
}