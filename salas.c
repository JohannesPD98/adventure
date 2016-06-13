#include <stdio.h>
#include "adventure.h"
void sala1(char sala[5]) {
	printf("\t\t\t_________________________________\n");
	printf("\t\t\t|\t\t    \t\t|\n");
	printf("\t\t\t|\t      %s \t\t|\n", sala);
	printf("\t\t\t|\t\t   \t\t|\n");
	printf("\t\t\t|\t\t\t\t|\n");
}
void corredor(void) {
	printf("\t________________|_____________|  |______________|\n");
	printf("\t|\t\t|\t\t\t\t|________________________\n");
	printf("\t|\t\t-\t\t\t\t|\t\t\t ?\n");
	printf("\t|\t\t-\t\t\t\t|\t???????????\t ?\n");
	printf("\t|_______________|\t\t\t\t-\t???????????\t ?\n");
	printf("\t|\t\t-\t\t\t\t-\t???????????\t ?\n");
	printf("\t|\t\t-\t\t\t\t|\t???????????\t ?\n");
	printf("\t|\t\t|\t\t\t\t|\t???????????\t ?\n");
	printf("\t|_______________|\t\t\t\t|________________________?\n");
	printf("\t|\t\t-\t\t\t\t|\n");
	printf("\t|\t\t-\t\t\t\t|\n");
	printf("\t|\t\t|\t\t\t\t|\n");
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
	printf("\t\t\t _____|_______| |_______|_______\n");
}
void hall(struct personagem adv) {
	if (adv.pedra == 1) {
	printf("\t\t\t|\t      * \t\t|\n");
	}
		else printf("\t\t\t|\t       *\t\t|\n");
	printf("________________________|\t\t\t\t|________________________\n");
	printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
	printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
	printf("|\t????????\t-\t\t\t\t-\t????????\t|\n");
	printf("|\t????????\t-\t\t\t\t-\t????????\t|\n");
	printf("|\t????????\t|\t\t\t\t|\t????????\t|\n");
	printf("|_______________________|\t\t\t\t|_______________________|\n");
	printf("\t\t\t|\t\t%c   \t\t|\n", adv.icon);
	printf("\t\t\t|______________| |______________|\n");
	printf("\t\t\t             ENTRADA\n");	
}
