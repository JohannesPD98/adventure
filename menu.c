#include <stdio.h>
#include "mapa.h"
#include "movimentos.h"
int nav( adv.at, char classe) {
			switch (at) {
				case 'A':
					at = hall1(at);
					break;
				case 'B':
					at = hall2(at);
					break;
				case 'C':
					at = hall3(at, classe);
					break;
				/*case 'D':
					at = hall4(at);
					break;
				case 'E':
					at = hall5(at);
					break;*/
				case 'L':
					at = rooml(at);
					break;
				case 'M':
					mapa();
					break;
				case 'R':
					at = roomr(at);
					break;
				case 'S':
					at = merc(at);
					break;
				case 'X':
					break;
			}			
	return at;
}
