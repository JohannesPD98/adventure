#include <stdio.h>
#include "mapa.h"
#include "menu.h"
int main(void)	{
	int classe = 0;
	char at = 0;
	while (classe != 1 && classe != 2) {
		printf("Escolha uma classe\n(1)Lutador\n(2) Mago\n");
		scanf("%d", &classe);
		if (classe == 1) {
			printf("Você escolheu Lutador.\n");
		}
			else if (classe == 2) { 
					printf("Você escolheu Mago.\n");
			}
	}	
	mapa();
	while (at != x) {
		at = nav(at);
	}
	return 0;
}
