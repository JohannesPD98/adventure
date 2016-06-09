#include <stdio.h>
#include "salas.h"
#include "adventure.h"
int mapa(struct personagem adv) {
	sala1("Final");
	corredor();
	entrada(adv);
	hall(adv);
	return 0;
}

