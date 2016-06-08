#include <stdio.h>
#include "mapa.h"

char sel(char at, char msg[], char cmds[], int comandos) {
	char input;
	int i, can = 0;
	printf("%s", msg);
	scanf(" %c", &input);
	for (i = 0; i <= comandos-1; i++) {
		if (input == cmds[i]) {
			can = 1;
		}
	}
	if (can != 1) {
		printf("Comando inválido.\n");
		sel(at, msg, cmds, comandos);
	}
		else {
			switch (input) {
			case 'X':
				return 'X';
			case 'M':
				mapa();
				return at;
			case 'F':
				return at+1;
			case 'R':
				return 'R';
			case 'L':
				return 'L';			
			}
		}
	return at;
}
