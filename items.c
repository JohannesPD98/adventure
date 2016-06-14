#include <stdio.h>
#include "adventure.h"

struct personagem buy(struct personagem adv, char index) {
	int i;
	switch (index) {
		case '1':
			if (adv.classe == 1) {
				for (i = 0; i < 4; i++) {
					if (adv.inventario[i] == '\0') {
						adv.inventario[i] = index;
						adv.atk = adv.atk * 1.5;
						adv.gold  = adv.gold - 10;
						break;
					}
				}
					printf("Inventário cheio!\n");
					break;
			}
			else {
				printf("Você não é da classe adequada!\n");
			}
				break;

		case '2':
			if (adv.classe == 2) {
				for (i = 0; i < 4; i++) {
					if (adv.inventario[i] == '\0') {
						adv.inventario[i] = index;
						adv.atk = adv.atk * 1.5;
						adv.gold  = adv.gold - 10;
						break;
					}
				}
					printf("Inventário cheio!\n");
					break;
			}
			else {
				printf("Você não é da classe adequada!\n");
			}
			break;

		case '3':
			if (adv.classe == 1) {
				for (i = 0; i < 4; i++) {
					if (adv.inventario[i] == '\0') {
						adv.inventario[i] = index;
						adv.hp = adv.hp * 1.5;
						adv.gold  = adv.gold - 20;
						break;
					}
				}
				printf("Inventário cheio!\n");
				break;
			}
			else {
				printf("Você não é da classe adequada!\n");
			}
			break;
		case '4':
			if (adv.classe == 2) {
				for (i = 0; i < 4; i++) {
					if (adv.inventario[i] == '\0') {
						adv.inventario[i] = index;
						adv.hp = adv.hp * 1.5;
						adv.gold  = adv.gold - 20;
						break;
					}
				}
				printf("Inventário cheio!\n");
				break;
			}
			else {
				printf("Você não é da classe adequada!\n");
			}
			break;
		case '5':
			if (adv.classe == 1) {
				adv.atk = adv.atk + 5;
			}
			adv.gold  = adv.gold - 10;
			break;
		case '6':
			if (adv.classe == 2) {
				adv.atk = adv.atk + 5;
			}
			adv.gold  = adv.gold - 10;
			break;
		case '7':
			if (adv.classe == 1) {
				adv.hp = adv.hp + 20;
				adv.gold  = adv.gold - 10;
			}
			else {
				adv.hp = adv.hp + 5;
				adv.gold  = adv.gold - 10;
			}
			break;
	}
	return adv;
}
