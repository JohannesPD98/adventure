#include <stdio.h>
#include "adventure.h"
void sala1(char sala[5]) {
    printf("\t\t\t_________________________________\n");
    printf("\t\t\t|\t\t    \t\t|\n");
    printf("\t\t\t|\t      %s \t\t|\n", sala);
    printf("\t\t\t|\t\t   \t\t|\n");
    printf("\t\t\t|\t\t\t\t|\n");
}
void corredor(struct personagem adv) {
    if (adv.at == 'F') printf("\t________________|_____________|%c |______________|\n", adv.icon);
    else printf("\t________________|_____________|  |______________|\n");
    printf("\t|\t\t|\t\t\t\t|________________________\n");
    printf("\t|\t\t-\t\t\t\t|\t\t\t ?\n");
    printf("\t|\t\t-\t\t\t\t|\t???????????\t ?\n");
    printf("\t|_______________|\t\t\t\t-\t???????????\t ?\n");
    printf("\t|\t\t|\t\t\t\t-\t???????????\t ?\n");
    printf("\t|\t\t-\t\t\t\t|\t???????????\t ?\n");
    printf("\t|\t\t-\t\t\t\t|\t???????????\t ?\n");
    printf("\t|_______________|\t\t\t\t|________________________?\n");
    printf("\t|\t\t|\t\t\t\t|\n");
    if (adv.at == 'E') printf("\t|\t\t-\t\t%c\t\t|\n", adv.icon);
    else printf("\t|\t\t-\t\t\t\t|\n");
    printf("\t|\t\t-\t\t\t\t|\n");
    printf("\t|_______________|_____________|  |______________|\n");

}
void entrada(struct personagem adv) {
    printf("\t\t\t      |   \t\t|      \n");
    if (adv.dragon == 0) {
        printf("\t\t\t      |\t    PERIGO  \t|      \n");
        printf("\t\t\t      |\t    PERIGO  \t|      \n");
    }
    else {
        printf("\t\t\t      |\t\t    \t|      \n");
        printf("\t\t\t      |\t\t    \t|      \n");
    }
    printf("\t\t\t      |   \t\t|      \n");
    if (adv.at == 'D') printf("\t\t\t _____|_______|%c|_______|_______\n", adv.icon);
    else printf("\t\t\t _____|_______| |_______|_______\n");
}
void hall(struct personagem adv) {
    if (adv.pedra == 0) {
        printf("\t\t\t|\t       *\t\t|\n");
    }
    else printf("\t\t\t|\t      * \t\t|\n");
    printf("________________________|\t\t\t\t|________________________\n");
    printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
    printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
    if (adv.at == 'R') printf("|\t????????    %c   -\t\t\t\t-\t????????\t|\n", adv.icon);
    else if (adv.at == 'L') printf("|\t????????\t-\t\t\t\t-  %c    ????????  \t|\n", adv.icon);
    else printf("|\t????????\t-\t\t\t\t-\t????????\t|\n");
    printf("|\t????????\t-\t\t\t\t-\t????????\t|\n");
    printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
    printf("|_______________________|\t\t\t\t|_______________________|\n");
    if (adv.at == 'B') 	printf("\t\t\t|\t\t%c\t\t|\n", adv.icon);
    else printf("\t\t\t|\t\t\t\t|\n");
    printf("\t\t\t|______________| |______________|\n");
    printf("\t\t\t             ENTRADA\n");
}
