#include <stdio.h>
#include "include/mapa.h"
#include "include/menu.h"
#include "include/adventure.h"

void stats(struct personagem adv) {
    int i;
    if (adv.classe == 1) {
        printf("\nClasse: Lutador\n");
    }
    else printf("Classe: Mago\n");
    printf("Level %d\n", adv.lvl);
    printf("Vida: %d\n", adv.hp);
    printf("Dano: %d\n", adv.atk);
    if (adv.boss == 3) {
        printf("Você tem uma chave!\n");
    }
    for (i = 0; i < 4; i++) {
        if (adv.inventario[i] == '\0') {
            printf("Você já ocupou %d de 4 espaços no seu inventário!\n", i);
            break;
        }
    }
    printf("Gold: %d\n\n", adv.gold);
}
int main(void)	{
    adv.classe = 0;
    adv.at = 'A';
    adv.lvl = 1;
    adv.hp = 100;
    adv.atk = 30;
    adv.pedra = 0;
    adv.dragon = 0;
    adv.lgrind = 0;
    adv.rgrind = 0;
    adv.gold = 0;
    adv.hall2 = 0;
    adv.hall4 = 0;
    adv.key = 0;
    adv.keytry = 0;
    adv.boss = 0;
    adv.inventario[0] = '\0';
    adv.inventario[1] = '\0';
    adv.inventario[2] = '\0';
    adv.inventario[3] = '\0';
    adv.inventario[4] = '\0';
    printf("Escolha uma classe\n(1)Lutador\n(2) Mago\n");
    while (adv.classe != 1 && adv.classe != 2) {
        scanf(" %d", &adv.classe);
        if (adv.classe == 1) {
            adv.hp += 50;
            printf("Você escolheu Lutador.\n");
        }
        else if (adv.classe == 2) {
            adv.atk += 5;
            printf("Você escolheu Mago.\n");
        }
        else printf("Digite 1 ou 2\n");
    }
    printf("Escolha um dígito para ser o seu ícone: ");
    scanf(" %c", &adv.icon);
    mapa(adv);
    while (adv.at != 'X') {
        adv = nav(adv);
    }
    return 0;
}
