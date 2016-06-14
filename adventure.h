#ifndef _ADVENTURE
#define _ADVENTURE
struct personagem {
	int classe;
	int lvl;
	int hp;
	int atk;
	char icon;
	char at;
	int pedra;
	int dragon;
	int lgrind;
	int rgrind;
	int gold;
	int hall2, hall2r, hall4;
	int key, keytry, boss, boss1, boss2, boss3;
	char inventario[5];
} adv;

struct monstro {
	char* nome[10];
	int hp;
	int atk;
} enemy;

#endif
