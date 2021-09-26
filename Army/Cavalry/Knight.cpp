#include "Knight.h"
#include <iostream>

using namespace std;

string Knight::name = "Knight";

void Knight::move() {
    cout << name << " moves on" << endl;
}

void Knight::fight() {
    cout << name << " fights" << endl;
}

void Knight::charge() {
    cout << name << " charges" << endl;
}