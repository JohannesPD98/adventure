#include <stdio.h>
#include "mapa.h"
#include "movimentos.h"
int nav(char at) {
			switch (at) {
				case 'A':
					at = mov1(at);
					break;
				case 'B':
					at = mov2(at);
					break;
				/*case 'C':
					at = mov3(at);
					break;
				case 'D':
					at = mov4(at);
					break;
				case 'E':
					at = mov5(at);
					break;*/
				case 'L':
					at = rooml(at);
				case 'M':
					mapa();
					break;
				case 'R':
					at = roomr(at);
				case 'S':
					at = merc(at);
					break;
				case 'X':
					break;
			}			
	return at;
}
