#include <stdio.h>
#include "salas.h"
#include "adventure.h"
int mapa(struct personagem adv) {
    sala1("Final");
    corredor(adv);
    entrada(adv);
    hall(adv);
    return 0;
}

