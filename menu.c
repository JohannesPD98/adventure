#include <stdio.h>
#include "mapa.h"
#include "movimentos.h"
int nav(int at) {
			switch (at) {
				case 0:
					at = mov1();
					break;
				case 1:
					at = mov2();
					break;
			}			
	return at;
}
