#include <stdio.h>
#include "mapa.h"
#include "menu.h"
int main(void)	{
	char classe = '0';
	char at = 'A';
	printf("Escolha uma classe\n(1)Lutador\n(2) Mago\n");
	while (classe != '1' && classe != '2') {
		scanf(" %c", &classe);
		if (classe == '1') {
			printf("Você escolheu Lutador.\n");
		}
			else if (classe == '2') { 
					printf("Você escolheu Mago.\n");
			}
				else printf("Digite 1 ou 2\n");
	}	
	mapa();
	while (at != 'X') {
		at = nav(at, classe);
	}
	return 0;
}
