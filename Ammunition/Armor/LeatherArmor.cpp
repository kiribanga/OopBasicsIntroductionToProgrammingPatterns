#include "LeatherArmor.h"

int LeatherArmor::defend(int damage, DamageType damageType) {
    if(damageType==cutting||damageType==crushing)
        damage=damage*2/3;
    return damage;
}