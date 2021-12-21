#include "ChainArmor.h"

int ChainArmor::defend(int damage, DamageType damageType) {
    if(damageType==crushing||damageType==pricking)
        damage=damage*2/3;
    return damage;
}
