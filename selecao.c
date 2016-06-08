#include <stdio.h>
#include "mapa.h"
#include "adventure.h"
struct personagem sel(struct personagem adv, char msg[], char cmds[], int comandos) {
	char input;
	int i, can = 0;
	printf("%s", msg);
	scanf(" %c", &input);
	for (i = 0; i <= comandos-1; i++) {
		if (input == cmds[i]) {
			can = 1;
		}
	}
	if (can != 1) {
		printf("Comando inválido.\n");
		sel(adv, msg, cmds, comandos);
	}
		else {
			switch (input) {
			case 'E':
				adv.at = 'B';
				return adv;
			case 'F':
				adv.at = 'C';
				adv.pedra = '0';
				return adv;
			case 'D':
				adv.at = 'D';
				return adv;
			case 'X':
				adv.at = 'X';
				return adv;
			case 'M':
				mapa(adv);
				return adv;
			case 'R':
				adv.at = 'R';
				adv.rgrind++;
				return adv;
			case 'L':
				adv.at = 'L';
				return adv;
				adv.lgrind++;			
			}
		}
	return adv;
}
