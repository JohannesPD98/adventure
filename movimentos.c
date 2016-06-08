#include <stdio.h>
#include <string.h>
#include "selecao.h"
#include "adventure.h"

struct personagem hall1(struct personagem adv) {
	int comandos = 3;
	char msg[] = {"Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(E)Entrar na caverna\n>"};
	char cmds[] = {'X', 'M', 'E', '\0'};
	adv = sel(adv, msg, cmds, comandos);
	return adv;
}

struct personagem hall2(struct personagem adv) {
	int comandos = 6;
	char msg[] = {"Na entrada da caverna, você é cumprimentado por um mercador, que oferece\nequipamentos para sua aventura. Ao explorar, você encontra três saídas,\numa de cada lado e uma a frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', '\0'};
	adv = sel(adv, msg, cmds, comandos);
	return adv;
}

struct personagem hall3(struct personagem adv) {
	int comandos = 6;
	char msg1[] = {"Para conseguir acessar o resto da caverna, você empurra a pedra e a tira do seu caminho.\nA sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char msg2[] = {"Para conseguir acessar o resto da caverna, você levita a pedra e a tira do seu caminho.\nA sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'D', 'R', 'L', 'S', '\0'};
	if (adv.classe == '1') {
		adv = sel(adv, msg1, cmds, comandos);
	}
		else {
			adv = sel(adv, msg2, cmds, comandos);
		}
	return adv;
}

struct personagem hall4(struct personagem adv) {
	int comandos = 6;
	char msg1[] = {"Ao entrar na sala perigosa, você encontra um dragão, do tamanho de uma mesa de jantar\n Com muito esforço, você consegue derrota-lo. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(I)Seguir em frente\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char msg2[] = {"Para conseguir acessar o resto da caverna, você levita a pedra e a tira do seu caminho.\n A sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Entrar na sala perigosa\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n>"};
	char cmds[] = { 'X', 'M', 'I', 'R', 'L', 'S', '\0'};
	if (adv.classe == '1') {
		adv = sel(adv, msg1, cmds, comandos);
	}
		else {
			adv = sel(adv, msg2, cmds, comandos);
		}
	return adv;
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
struct personagem merc(struct personagem adv) {
	int comandos = 3;
	char msg[] = {"O mercador não tem nada. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar\n>"};
	char cmds[] = { 'X', 'M', 'B', '\0'};
	adv = sel(adv, msg, cmds, comandos);
	return adv;
}

struct personagem rooml(struct personagem adv) {
	int comandos = 4;
	char msg[] = {"Você mata um monstro na sala, vende seu loot para o mercador e ganha ouro.\nEsse espaço é muito grande, e você não o explorou por completo ainda\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(L)Explorar mais\n(B)Voltar pela mesma saída\n>"};
	char cmds[] = { 'X', 'M', 'B', 'L', '\0'};
	adv = sel(adv, msg, cmds, comandos);
	return adv;
}

struct personagem roomr(struct personagem adv) {
	int comandos = 4;
	char msg[] = {"Você mata um monstro na sala, vende seu loot para o mercador e ganha ouro.\nEsse espaço é muito grande, e você não o explorou por completo ainda\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(L)Explorar mais\n(B)Voltar pela mesma saída\n>"};
	char cmds[] = { 'X', 'M', 'L', 'B', '\0'};
	adv = sel(adv, msg, cmds, comandos);
	return adv;
}

