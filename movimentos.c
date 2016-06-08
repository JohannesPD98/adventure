#include <stdio.h>
#include "selecao.h"

char mov1(char at) {
	int comandos = 3;
	char msg[] = {"Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na caverna\n>"};
	char cmds[] = {'X', 'M', 'F', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

char mov2(char at) {
	int comandos = 6;
	char msg[] = {"Na entrada da caverna, você é cumprimentado por um mercador, que oferece\n equipamentos para sua aventura. Ao explorar, você encontra três saídas,\n uma de cada lado e uma a frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}
char merc(char at) {
	int comandos = 3;
	char msg[] = {"O mercador não tem nada. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>"};
	char cmds[] = { 'X', 'M', 'B', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}
char rooml(char at) {
	printf("nothing here yet.\n");
	return 'B';
}
char roomr(char at) {
	printf("nothing here yet.\n");
	return 'B';
}
