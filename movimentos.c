#include <stdio.h>
#include "mapa.h"

int mov1() {
	int comando;
		while (1==1) {
			printf("Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n");
			printf("(0)Sair do Jogo\n(1)Mostrar Mapa\n(2)Entrar na caverna\n>");
			scanf("%d", &comando);
				switch (comando) {
					case 0:
						return 13;
					case 1:
						mapa();
						break;
					case 2:
						return 1;
					default :
						continue;
				}
		}
}
int mov2() {
			printf("Ao entrar na caverna, você é cumprimentado por um mercador, que oferece");
			printf(" equipamentos para sua aventura.\nVocê encontra três saídas, uma de cada lado");
			printf(" e uma a frente, que está barrada por uma rocha do seu tamanho.\n");
		return 0;
	}
