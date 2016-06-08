#include <stdio.h>
#include "mapa.h"
#include "menu.h"
typedef struct personagem {
		char classe;
		char at;
		int pedra;
		int lgrind;
		int rgrind;
		int gold;
		char inventario[];
		} adv;
int main(void)	{
	adv.classe = '0';
	adv.at = 'A';
	printf("Escolha uma classe\n(1)Lutador\n(2) Mago\n");
	while (classe != '1' && classe != '2') {
		scanf(" %c", &adv.classe);
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
		at = nav(adv.at, adv.classe);
	}
	return 0;
}
