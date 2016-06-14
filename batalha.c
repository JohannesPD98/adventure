#include <stdio.h>
#include "adventure.h"
#include <stdlib.h>
#include <time.h>

struct personagem lutagrind(struct personagem adv) {
	srand(time(NULL));
	int seed = rand() % 4;
	switch (seed) {
		case 0:
			enemy.nome[0] = "Lobo";
			break;
		case 1:
			enemy.nome[0] = "Morcego";
			break;
		case 2:
			enemy.nome[0] = "Duende";
			break;
		case 3:
			enemy.nome[0] = "Esqueleto";
			break;
	}
	char t;
	int hp = adv.hp;
	int atk = adv.atk;
	if (adv.classe == 1) {
		hp = hp + 10 * adv.lvl;
		atk = atk + 2 * adv.lvl;
	}
	if (adv.classe == 2) {
		atk = atk + 10 * adv.lvl;
	}
	enemy.hp = 100;
	enemy.atk = 5;
	while (hp >=0 && enemy.hp >=0) {
		printf("Você \t\t%s\n", *enemy.nome);
		printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
		printf("ATK:%d\t\tATK:%d\n", atk, enemy.atk);
			printf("É seu turno, o que você faz?\n(A)Atacar\n(F)Fugir\n>");
			scanf(" %c", &t);
			if (t == 'F') {
				printf("Você foge até a entrada da caverna!\n");
				adv.at = 'B';
				return adv;
			}
			if (t == 'A') {
				printf("Você ataca o %s!\n", *enemy.nome);
				enemy.hp = enemy.hp - atk;
				if (enemy.hp <= 0) {
					break;
				}
				printf("Você \t\t%s\n", *enemy.nome);
				printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
				printf("ATK:%d\t\tATK:%d\n", atk, enemy.atk);
				printf("O %s se prepara para atacar, o que você faz\n(D)Se defender\n(F)Fugir\n>", *enemy.nome);
				scanf(" %c", &t);
				if ( t == 'F') {
					printf("Você foge até a entrada da caverna!\n");
					adv.at = 'B';
					return adv;
				}
				if ( t == 'D') {
					printf("O %s te ataca\n", *enemy.nome);
					hp = hp - enemy.atk;
					if (hp <= 0) {
						break;
					}
				}
			}
	}
	if (hp <= 0) {
		printf("Você foi derrotado pelo %s\n", *enemy.nome);
		adv.at = 'X';
	}
	else {
		printf("Você derrotou o %s\n", *enemy.nome);
		adv.gold = adv.gold + 5;
		adv.lvl++;
	}
	return adv;
}

struct personagem lutabosses(struct personagem adv) {
	switch (adv.boss) {
		case 0:
			enemy.nome[0] = "Mago";
			break;
		case 1:
			enemy.nome[0] = "Troll";
			break;
		case 2:
			enemy.nome[0] = "Ogro";
			break;
	}
	char t;
	int hp = adv.hp;
	int atk = adv.atk;
	if (adv.classe == 1) {
		hp = hp + 10 * adv.lvl;
		atk = atk + 2 * adv.lvl;
	}
	if (adv.classe == 2) {
		atk = atk + 10 * adv.lvl;
	}
	enemy.hp = 200;
	enemy.atk = 10;
	while (hp >=0 && enemy.hp >=0) {
		printf("Você \t\t%s\n", *enemy.nome);
		printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
		printf("ATK:%d\t\tATK:%d\n", atk, enemy.atk);
			printf("É seu turno, o que você faz?\n(A)Atacar\n(F)Fugir\n>");
			scanf(" %c", &t);
			if (t == 'F') {
				printf("Você foge até a entrada da caverna!\n");
				adv.at = 'B';
				return adv;
			}
			if (t == 'A') {
				printf("Você ataca o %s!\n", *enemy.nome);
				enemy.hp = enemy.hp - atk;
				if (enemy.hp <= 0) {
					break;
				}
				printf("Você \t\t%s\n", *enemy.nome);
				printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
				printf("ATK:%d\t\tATK:%d\n", atk, enemy.atk);
				printf("O %s se prepara para atacar, o que você faz\n(D)Se defender\n(F)Fugir\n>", *enemy.nome);
				scanf(" %c", &t);
				if ( t == 'F') {
					printf("Você foge até a entrada da caverna!\n");
					adv.at = 'B';
					return adv;
				}
				if ( t == 'D') {
					printf("O %s te ataca\n", *enemy.nome);
					hp = hp - enemy.atk;
					if (hp <= 0) {
						break;
					}
				}
			}
	}
	if (hp <= 0) {
		printf("Você foi derrotado pelo %s\n", *enemy.nome);
		adv.at = 'X';
	}
	else {
		printf("Você derrotou o %s\n", *enemy.nome);
		adv.lvl = adv.lvl + 2;
		adv.boss++;
		if (adv.boss >= 2) {
			printf("Você encontrou uma chave!\n");
			adv.key = 1;
		}
		else {
			adv.gold = adv.gold + 10;
		}
	}
	return adv;

}

struct personagem lutafinal(struct personagem adv) {
	enemy.nome[0] = "Dragão";
	char t;
	int hp = adv.hp;
	int atk = adv.atk;
	if (adv.classe == 1) {
		hp = hp + 10 * adv.lvl;
		atk = atk + 2 * adv.lvl;
	}
	if (adv.classe == 2) {
		atk = atk + 10 * adv.lvl;
	}
	enemy.hp = 500;
	enemy.atk = 25;
	while (hp >=0 && enemy.hp >=0) {
		printf("Você \t\t%s\n", *enemy.nome);
		printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
		printf("ATK:%d\t\tATK:%d\n", atk, enemy.atk);
			printf("É seu turno, o que você faz?\n(A)Atacar\n(F)Fugir\n>");
			scanf(" %c", &t);
			if ( t == 'F') {
				printf("Você tenta fugir, mas o dragão barra a saída e te esmaga!\n");
				adv.at = 'X';
				return adv;
			}
			if (t == 'A') {
				printf("Você ataca o %s!\n", *enemy.nome);
				enemy.hp = enemy.hp - atk;
				if (enemy.hp <= 0) {
					break;
				}
				printf("Você \t\t%s\n", *enemy.nome);
				printf("HP:%d \t\tHP:%d\n", hp, enemy.hp);
				printf("ATK:%d\t\tATK:%d\n", adv.atk, enemy.atk);
				printf("O %s se prepara para atacar, o que você faz\n(D)Se defender\n(F)Fugir\n>", *enemy.nome);
				scanf(" %c", &t);
				if (t == 'F') {
					printf("Você tenta fugir, mas o dragão barra a saída e te esmaga!\n");
					adv.at = 'X';
					return adv;
				}
				if (t == 'D') {
					printf("O %s te ataca\n", *enemy.nome);
					hp = hp - enemy.atk;
					if (hp <= 0) {
						break;
					}
				}
			}
	}
	if (hp <= 0) {
		printf("Você foi derrotado pelo %s\n", *enemy.nome);
	}
	else {
		printf("Parabéns, Você venceu o jogo!\nPor: Johannes Portz Dias\n");
	}
	adv.at = 'X';
	return adv;
}
