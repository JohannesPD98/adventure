#include <stdio.h>
#include "adventure.h"

struct personagem lutagrind(struct personagem adv) {
		


		adv.at = 'X';
		return adv;
}

struct personagem lutabosses(struct personagem adv) {



}

struct personagem lutafinal(struct personagem adv) {
	enemy.nome[0] = "Dragão";
	char t;
	int hp = adv.hp;
	enemy.hp = 500;
	enemy.atk = 25;
	while (hp >=0 && enemy.hp >=0) {
		printf("Você \t\t%s\n", *enemy.nome);
		printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
		printf("ATK:%d\t\tATK:%d\n", adv.atk, enemy.hp);
			printf("É seu turno, o que você faz?\n(A)Atacar\n(F)Fugir\n>");
			scanf(" %c", &t);
			if ( t == 'F') {
				printf("Você tenta fugir, mas o dragão barra a saída e te esmaga!\n");
				adv.at = 'X';
				return adv;
			}
			printf("Você ataca o %s", *enemy.nome);
			enemy.hp = enemy.hp - adv.atk;
			printf("Você \t\t%s\n", *enemy.nome);
			printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
			printf("ATK:%d\t\tATK:%d\n", adv.atk, enemy.hp);
			printf("O %s se prepara para atacar, o que você faz\n(D)Se defender\n(F)Fugir\n>", *enemy.nome);
			scanf(" %c", &t);
			if ( t == 'F') {
				printf("Você tenta fugir, mas o dragão barra a saída e te esmaga!\n");
				adv.at = 'X';
				return adv;
			}
			printf("O 
	}
		
}
