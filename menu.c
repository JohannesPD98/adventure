#include <stdio.h>
#include "mapa.h"
#include "movimentos.h"
#include "batalha.h"
#include "adventure.h"

struct personagem nav(struct personagem adv) {
			switch (adv.at) {
				case 'A':
					adv = hall1(adv);
					break;
				case 'B':
					adv = hall2(adv);
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
				case 'C':
					adv = bosses(adv);
					break;
				case 'L':
					adv = rooml(adv);
					break;
				case 'M':
					mapa(adv);
					break;
				case 'R':
					adv = roomr(adv);
					break;
				case 'S':
					adv = merc(adv);
					break;
				case 'X':
					break;
			}			
	return adv;
}
