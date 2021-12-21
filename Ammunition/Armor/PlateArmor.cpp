#include "PlateArmor.h"

int PlateArmor::defend(int damage, DamageType damageType) {
    switch (damageType) {
        case cutting:

            break;
        case pricking:

            break;
        case crushing:

            break;
    }
    if(damageType==cutting||damageType==pricking)
        damage=damage*2/3;
    return damage;
}