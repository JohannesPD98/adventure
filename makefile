CFLAGS = -Wall -c -I include
OBJECTS = salas.o mapa.o movimentos.o menu.o selecao.o batalha.o items.o

adventure: $(OBJECTS)
	gcc  adventure.c $(OBJECTS) -o adventure

items.o: items.c include/item.h
	gcc $(CFLAGS) items.c

salas.o: salas.c include/salas.h
	gcc $(CFLAGS) salas.c

mapa.o: mapa.c include/mapa.h
	gcc $(CFLAGS) mapa.c

movimentos.o: movimentos.c include/movimentos.h
	gcc $(CFLAGS) movimentos.c

menu.o: menu.c include/menu.h
	gcc $(CFLAGS) menu.c

selecao.o: selecao.c include/selecao.h
	gcc $(CFLAGS) selecao.c

batalha.o: batalha.c include/batalha.h
	gcc $(CFLAGS) batalha.c

clean:
	rm *.o
	rm adventure
