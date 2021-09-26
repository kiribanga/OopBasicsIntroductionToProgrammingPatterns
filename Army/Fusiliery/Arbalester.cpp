#include "Arbalester.h"
#include <iostream>

using namespace std;

string Arbalester::name = "Arbalester";

void Arbalester::move() {
    cout << name << " moves on" << endl;
}

void Arbalester::fight() {
    cout << name << " fights" << endl;
}

void Arbalester::shoot() {
    cout << name << " shoots" << endl;
}