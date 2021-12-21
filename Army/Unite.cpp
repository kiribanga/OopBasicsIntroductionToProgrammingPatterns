#include "Unite.h"
#include "../termcolor/termcolor.hpp"

using namespace std;

void Unite::move() {
    //cout << name << " moves on" << endl;
}

void Unite::fight(Unite *enemy) {
    /*
    cout << name << " attacks " << enemy->name << ". ";
    int damage = fight(0);
    damage=enemy->fight(damage);
    fight(damage);
    cout << endl;
     */
}

int Unite::fight(int enemyDamage) {
    int thisDamage;
    /*
    switch (firstWeapon->handed) {
        case one_handed:
            thisDamage=firstWeapon->attack(squadSize)+secondWeapon->attack(squadSize)/2;
            break;
        case two_handed:
            thisDamage=firstWeapon->attack(squadSize);
            break;
        case ranged:
            thisDamage=secondWeapon->attack(squadSize);
            break;
    }

    if(enemyDamage!=0){
        squadSize-=enemyDamage/maxHealth;
        health-=enemyDamage%maxHealth;
        if (health<=0){
            squadSize--;
            health+=maxHealth;
        }
        cout << name << " has " << squadSize << " size. ";
    }
    */
    return thisDamage;
}

std::ostream &operator<<(std::ostream &out, const Unite &unite) {
    switch (unite.color) {
        case grey:
            out << termcolor::grey;
            break;
        case red:
            out << termcolor::red;
            break;
        case green:
            out << termcolor::green;
            break;
        case yellow:
            out << termcolor::yellow;
            break;
        case blue:
            out << termcolor::blue;
            break;
        case magenta:
            out << termcolor::magenta;
            break;
        case cyan:
            out << termcolor::cyan;
            break;
        case white:
            out << termcolor::white;
            break;
        case bright_grey:
            out << termcolor::bright_grey;
            break;
        case bright_red:
            out << termcolor::bright_red;
            break;
        case bright_green:
            out << termcolor::bright_green;
            break;
        case bright_yellow:
            out << termcolor::bright_yellow;
            break;
        case bright_blue:
            out << termcolor::bright_blue;
            break;
        case bright_magenta:
            out << termcolor::bright_magenta;
            break;
        case bright_cyan:
            out << termcolor::bright_cyan;
            break;
        case bright_white:
            out << termcolor::bright_white;
            break;
    }
    out << unite.letter << termcolor::reset;
    return out;
}