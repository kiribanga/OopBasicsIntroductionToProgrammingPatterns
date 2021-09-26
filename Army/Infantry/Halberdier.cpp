#include "Halberdier.h"
#include <iostream>

using namespace std;

string Halberdier::name = "Halberdier";

void Halberdier::move() {
    cout << name << " moves on" << endl;
}

void Halberdier::fight() {
    cout << name << " fights" << endl;
}

void Halberdier::protect() {
    cout << name << " protects" << endl;
}
