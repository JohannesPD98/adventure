#include <stdio.h>
#include "mapa.h"
#include "menu.h"
#include "adventure.h"

int main(void)	{
	adv.classe = '0';
	adv.at = 'A';
	adv.pedra = 0;
	adv.dragon = 0;
	adv.lgrind = 0;
	adv.rgrind = 0;
	adv.gold = 0;
	adv.hall2 = 0;
	adv.hall4 = 0;
	
	printf("Escolha uma classe\n(1)Lutador\n(2) Mago\n");
	while (adv.classe != '1' && adv.classe != '2') {
		scanf(" %c", &adv.classe);
		if (adv.classe == '1') {
			printf("Você escolheu Lutador.\n");
		}
			else if (adv.classe == '2') { 
					printf("Você escolheu Mago.\n");
			}
				else printf("Digite 1 ou 2\n");
	}
	printf("Escolha um dígito para ser seu ícone: ");
	scanf(" %c", &adv.icon);
	mapa(adv);
	while (adv.at != 'X') {
		adv = nav(adv);
	}
	return 0;
}
