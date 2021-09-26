#include "Archer.h"
#include <iostream>

using namespace std;

string Archer::name = "Archer";

void Archer::move() {
    cout << name << " moves on" << endl;
}

void Archer::fight() {
    cout << name << " fights" << endl;
}

void Archer::shoot() {
    cout << name << " shoots" << endl;
}