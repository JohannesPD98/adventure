#include <stdio.h>
#include "mapa.h"

int mov1() {
	int comando;
	char msg[500] = {"Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na caverna\n>"}
			return sel(msg);
}

int mov2() {
	char resp = { 
	char msg[500] = {"Ao entrar na caverna, você é cumprimentado por um mercador, que oferece\n equipamentos para sua aventura. Ao explorar, você encontra três saídas,\n uma de cada lado e uma a frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"}
	while (1) {
		
		scanf("%d", &comando);
		switch (comando) {
			case 0:
				return 13;
			case 1:
				mapa();
				break;
			case 2:
				return 2;
			case 3:
				return 3;
			case 4:
				return 4;
			case 5:
				return 5;
			default :
				printf("Digite um número válido\n");
				continue;
		}
	}
}
int merc() {
	int comando;
	while (1) {
		printf("O mercador não tem nada. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>");
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
				printf("Digite um número\n");
				continue;
		}
	}
}
		
