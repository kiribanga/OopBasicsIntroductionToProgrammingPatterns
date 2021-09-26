#include "Warrior.h"
#include <iostream>

using namespace std;

string Warrior::name = "Warrior";

void Warrior::move() {
    cout << name << " moves on" << endl;
}

void Warrior::fight() {
    cout << name << " fights" << endl;
}

void Warrior::protect() {
    cout << name << " protects" << endl;
}