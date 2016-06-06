#include <stdio.h>
#include "mapa.h"
#include "movimentos.h"
int nav(char at) {
			switch (at) {
				case 0:
					at = mov1();
					break;
				case 1:
					at = mov2();
					break;
				case S:
					at = merc();
					break;
				/*case 3:
					at = mov3();
					break;
				case 4:
					at = mov4();
					break;*/
			}			
	return at;
}
