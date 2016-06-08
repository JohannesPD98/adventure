#include <stdio.h>
#include <string.h>
#include "selecao.h"

char hall1(char at) {
	int comandos = 3;
	char msg[] = {"Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na caverna\n>"};
	char cmds[] = {'X', 'M', 'F', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

char hall2(char at) {
	int comandos = 6;
	char msg[] = {"Na entrada da caverna, você é cumprimentado por um mercador, que oferece\n equipamentos para sua aventura. Ao explorar, você encontra três saídas,\n uma de cada lado e uma a frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

char hall3(char at, char classe) {
	int comandos = 6;
	char msg1[] = {"Para conseguir acessar o resto da caverna, você empurra a pedra e a tira do seu caminho.\n A sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char msg2[] = {"Para conseguir acessar o resto da caverna, você levita a pedra e a tira do seu caminho.\n A sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', '\0'};
	if (classe == 1) {
		at = sel(at, msg1, cmds, comandos);
	}
		else {
			at = sel(at, msg2, cmds, comandos);
		}
	return at;
}

/*char hall4(char at, char classe) {
	int comandos = 6;
	char mago[] = {"você levita a pedra e a tira do seu caminho"};
	char Lutador[] = {"você empurra a pedra e a tira do seu caminho"};
	char msg[] = {"Para conseguir acessar o resto da caverna, %s\n A sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}*/
char merc(char at) {
	int comandos = 3;
	char msg[] = {"O mercador não tem nada. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>"};
	char cmds[] = { 'X', 'M', 'B', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

char rooml(char at) {
	int comandos = 3;
	char msg[] = {"Você mata um monstro na sala, vende seu loot para o mercador e ganha ouro\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>"};
	char cmds[] = { 'X', 'M', 'B', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

char roomr(char at) {
	int comandos = 3;
	char msg[] = {"Você mata um monstro na sala, vende seu loot para o mercador e ganha ouro\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>"};
	char cmds[] = { 'X', 'M', 'B', '\0'};
	at = sel(at, msg, cmds, comandos);
	return at;
}

