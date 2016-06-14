#include <stdio.h>
#include "include/mapa.h"
#include "include/movimentos.h"
#include "include/batalha.h"
#include "include/adventure.h"

struct personagem nav(struct personagem adv) {
    switch (adv.at) {
    case 'A':
        adv = hall1(adv);
        break;
    case 'B':
        adv = hall2(adv);
        break;
    case 'C':
        adv = bosses(adv);
        break;
    case 'D':
        adv = hall4(adv);
        break;
    case 'E':
        adv = corridor(adv);
        break;
    case 'F':
        adv = final(adv);
        break;
    case 'G':
        adv = grind(adv);
        break;
    case 'K':
        adv = merceq(adv);
        break;
    case 'Z':
        adv = merccon(adv);
        break;
    case 'L':
        adv = rooml(adv);
        break;
    case 'R':
        adv = roomr(adv);
        break;
    case 'S':
        adv = merc(adv);
    case 'X':
        break;
    }
    return adv;
}
