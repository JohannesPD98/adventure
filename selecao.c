#include <stdio.h>
#include "include/mapa.h"
#include "include/batalha.h"
#include "include/item.h"
#include "include/adventure.h"
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
        case 'W':
            stats(adv);
            return adv;
        case 'S':
            adv.at = 'S';
            return adv;
        case 'C':
            adv.at = 'K';
            return adv;
        case 'Z':
            adv.at = 'Z';
            return adv;
        case 'B':
            adv.at = 'B';
            return adv;
        case 'D':
            if (adv.dragon == 0) {
                adv.at = 'D';
                adv.dragon = 1;
            }
            else {
                adv.at = 'E';
            }
            return adv;
        case 'E':
            adv.at = 'B';
            return adv;
        case 'F':
            adv.at = 'B';
            adv.pedra = 1;
            return adv;
        case 'G':
            adv.at = 'G';
            return adv;
        case 'I':
            adv.at = 'E';
            return adv;
        case 'O':
            if (adv.keytry == 0) {
                adv.keytry = 1;
                return adv;
            }
            else if (adv.boss != 3) {
					printf("Você não tem a chave!\n");
					return adv;
				}
				else {
                	adv.at = 'F';
                	return adv;
				}
        case 'P':
            adv.at = 'E';
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
            adv.lgrind++;
            return adv;
        case 'K':
            adv.at = 'C';
            return adv;
        case 'A':
            lutabosses(adv);
            adv.at = 'E';
            adv.boss++;
            return adv;
        case 'U':
            adv = lutafinal(adv);
            return adv;
        case 'X':
            adv.at = 'X';
            return adv;
        case '1':
            adv = buy(adv, input);
            return adv;
        case '2':
            adv = buy(adv, input);
            return adv;
        case '3':
            adv = buy(adv, input);
            return adv;
        case '4':
            adv = buy(adv, input);
            return adv;
        case '5':
            adv = buy(adv, input);
            return adv;
        case '6':
            adv = buy(adv, input);
            return adv;
        case '7':
            adv = buy(adv, input);
            return adv;
        }
    }
    return adv;
}
