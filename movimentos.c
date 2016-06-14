#include <stdio.h>
#include <string.h>
#include "include/batalha.h"
#include "include/selecao.h"
#include "include/adventure.h"


//Funções de navegação do jogo
struct personagem hall1(struct personagem adv) {
    int comandos = 4;
    char msg[] = {"Você está na frente da caverna do Dragão, com apenas um mapa.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(E)Entrar na caverna\n(W)Mostrar seu status\n>"};
    char cmds[] = {'X', 'M', 'E', 'W', '\0'};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}

struct personagem hall2(struct personagem adv) {
    int comandos = 7;
    if (adv.pedra == 0) {
        char cmds[] = { 'X', 'M', 'F', 'R', 'L', 'S', 'W', '\0'};
        if (adv.hall2 == 0) {
            char msg1[] = {"Na entrada da caverna, você é cumprimentado por um mercador, que oferece\nequipamentos para sua aventura. Ao explorar, você encontra três saídas,\numa de cada lado e uma à frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
            adv.hall2 = 1;
            adv = sel(adv, msg1, cmds, comandos);
        }
        else {
            char msg2[] = {"Você está na entrada da caverna, que tem três saídas,\numa de cada lado e uma à frente, que está barrada por uma rocha do seu tamanho.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(F)Tentar Mover a pedra\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
            adv = sel(adv, msg2, cmds, comandos);
        }
        return adv;
    }
    else {
        char cmds[] = { 'X', 'M', 'D', 'R', 'L', 'S', 'W', '\0'};
        if (adv.hall2r == 0) {
            if (adv.classe == 1) {
                char msg1[] = {"Para conseguir acessar o resto da caverna, você empurra a pedra e a tira do seu caminho.\nA sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Avançar\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
                adv = sel(adv, msg1, cmds, comandos);
            }
            else {
                char msg2[] = {"Para conseguir acessar o resto da caverna, você levita a pedra e a tira do seu caminho.\nA sala com a marcação de PERIGO agora está aberta. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Avançar\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
                adv = sel(adv, msg2, cmds, comandos);
            }
            adv.hall2r = 1;
        }
        else {
            char msg1[] = {"Você está na entrada da caverna, que tem três saídas, e a entrada à frente agora está liberada.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(D)Avançar\n(R)Ir para direita\n(L)Ir para Esquerda\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
            adv = sel(adv, msg1, cmds, comandos);
        }
        return adv;
    }
}

struct personagem hall4(struct personagem adv) {
    int comandos = 6;
    char cmds[] = { 'X', 'M', 'I', 'F', 'S', 'W', '\0'};
    if (adv.classe == 1) {
        char msg1[] = {"Ao entrar na sala perigosa, você encontra um dragão, do tamanho de uma mesa de jantar\nCom muito esforço, você passa despercebido. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(I)Seguir em frente\n(F)Voltar para a entrada\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
        adv = sel(adv, msg1, cmds, comandos);
    }
    else {
        char msg2[] = {"Ao entrar na sala perigosa, você encontra um dragão, do tamanho de uma mesa de jantar\nCom muita concentração, você o coloca em um transe. O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(I)Seguir em frente\n(R)Ir para direita\n(L)Ir para Esquerda\n(F)Voltar para a entrada\n(S)Falar com o mercador\n(W)Mostrar seu status\n>"};
        adv = sel(adv, msg2, cmds, comandos);
    }
    return adv;
}

struct personagem corridor(struct personagem adv) {
    int comandos = 7;
    char cmds[] = { 'X', 'M', 'F', 'K', 'G', 'O', 'W', '\0'};
    char msg[] = {"Você está no começo de um corredor, com três portas à esquerda, uma à direita e uma logo à frente\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(K)Explorar as salas à esquerda\n(G)Explorar a sala à direita\n(O)Seguir em frente\n(F)Voltar para a entrada\n(W)Mostrar seu status\n>"};
    char msg1[] = {"Você está no começo de um corredor, com três portas à esquerda, uma à direita e uma logo à frente\nA entrada à frente está trancada, e necessita de uma chave para ser aberta.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(K)Explorar as salas à esquerda\n(G)Explorar a sala à direita\n(O)Seguir em frente\n(F)Voltar para a entrada\n(W)Mostrar seu status\n>"};
    if (adv.keytry == 0) {
        adv = sel(adv, msg, cmds, comandos);
    }
    else {
        adv = sel(adv, msg1, cmds, comandos);
    }
    return adv;
}

struct personagem final(struct personagem adv) {
    int comandos = 5;
    char cmds[] = { 'X', 'M', 'U', 'P', 'W', '\0'};
    char msg[] = {"Você encontrou o tesouro da caverna! Mas ele está protegido por um dragão enorme.\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(U)Lutar com o dragão\n(P)Fugir\n(W)Mostrar seu status\n>"};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}

struct personagem bosses(struct personagem adv) {
    adv.boss1 = 0;
    adv.boss2 = 1;
    adv.boss3 = 2;
    int comandos = 5;
    char cmds[] = { 'X', 'M', 'A', 'F', 'W', '\0'};
    char msg1[] = {"Ao entrar na sala, você encontra um Mago! Ele provavelmente carrega algo util\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(A)Atacar o Mago\n(F)Voltar para a entrada\n(W)Mostrar seu status\n>"};
    char msg2[] = {"Ao entrar na sala, você encontra um Troll! Ele provavelmente carrega algo util\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(A)Atacar o Troll\n(F)Voltar para a entrada\n(W)Mostrar seu status\n>"};
    char msg3[] = {"Ao entrar na sala, você encontra um Ogro! Ele provavelmente carrega algo util\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(A)Atacar o Ogro\n(F)Voltar para a entrada\n(W)Mostrar seu status\n>"};
    if (adv.boss == 0) {
        adv = sel(adv, msg1, cmds, comandos);
    }
    else if (adv.boss == 1) {
        adv = sel(adv, msg2, cmds, comandos);
    }
    else if (adv.boss == 2) {
        adv = sel(adv, msg3, cmds, comandos);
    }
    return adv;
}


//Funções de interação com o mercador
struct personagem merc(struct personagem adv) {
    int comandos = 6;
    char msg[] = {"O mercador apresenta todos os seus itens disponíveis.\n O que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(C)Ver itens equipáveis\n(Z)Ver itens consumíveis\n(B)Voltar\n(W)Mostrar seu status\n>"};
    char cmds[] = { 'X', 'M','C', 'Z', 'B', 'W', '\0'};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}

struct personagem merceq(struct personagem adv) {
    int comandos = 6;
    char msg[] = {"(1)Espada - 10g\n(2)Varinha - 10g\n(3)Armadura de couro - 20g\n(4)Túnica - 20g\n(S)Sair\n>"};
    char cmds[] = { '1', '2', '3', '4', 'S', '\0'};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}

struct personagem merccon(struct personagem adv) {
    int comandos = 4;
    char msg[] = {"(5)Poção de força - 10g\n(6)Poção de Inteligência - 10g\n(7)Poção de Vitalidade - 10g\n(S)Sair\n>"};
    char cmds[] = { '5', '6', '7', 'S', '\0'};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}


// Funções das salas de luta aleatória
struct personagem grind(struct personagem adv) {
    int comandos = 5;
    adv = lutagrind(adv);
    if (adv.at == 'X') {
        return adv;
    }
    char msg[] = {"Você matou um monstro na sala, vendeu seu loot para o mercador e ganhou ouro.\nEsse espaço é muito grande, e você não o explorou por completo ainda\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(G)Explorar mais\n(B)Voltar pela mesma saída\n(W)Mostrar seu status\n>"};
    char cmds[] = { 'X', 'M', 'B', 'G', 'W', '\0'};
    adv = sel(adv, msg, cmds, comandos);
    return adv;
}

struct personagem rooml(struct personagem adv) {
    int comandos = 5;
    if (adv.lgrind < 5) {
        adv = lutagrind(adv);
        if (adv.at == 'X') {
            return adv;
        }
        char msg[] = {"Você matou um monstro na sala, vendeu seu loot para o mercador e ganhou ouro.\nEsse espaço é muito grande, e você não o explorou por completo ainda\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(L)Explorar mais\n(B)Voltar pela mesma saída\n(W)Mostrar seu status\n>"};
        char cmds[] = { 'X', 'M', 'B', 'L', 'W', '\0'};
        adv = sel(adv, msg, cmds, comandos);
        return adv;
    }
    else {
        char msg[] = {"Você explorou todo o espaço, e não encontrou mais nenhum monstro\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar para o espaço inicial\n(W)Mostrar seu status\n>"};
        char cmds[] = { 'X', 'M', 'B', 'W', '\0'};
        adv = sel(adv, msg, cmds, comandos);
        return adv;
    }
}

struct personagem roomr(struct personagem adv) {
    int comandos = 5;
    if (adv.rgrind < 5) {
        adv = lutagrind(adv);
        if (adv.at == 'X') {
            return adv;
        }
        char msg[] = {"Você matou um monstro na sala, vendeu seu loot para o mercador e ganhou ouro.\nEsse espaço é muito grande, e você não o explorou por completo ainda\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(R)Explorar mais\n(B)Voltar pela mesma saída\n(W)Mostrar seu status\n>"};
        char cmds[] = { 'X', 'M', 'B', 'R', 'W', '\0'};
        adv = sel(adv, msg, cmds, comandos);
        return adv;
    }
    else {
        char msg[] = {"Você explorou todo o espaço, e não encontrou mais nenhum monstro\nO que você faz?\n(X)Sair do Jogo\n(M)Mostrar Mapa\n(B)Voltar para o espaço inicial\n(W)Mostrar seu status\n>"};
        char cmds[] = { 'X', 'M', 'B', 'W', '\0'};
        adv = sel(adv, msg, cmds, comandos);
        return adv;
    }
}
