CFLAGS = -Wall -c -I include
OBJECTS = salas.o mapa.o movimentos.o menu.o selecao.o batalha.o items.o

adventure: $(OBJECTS)
	gcc  adventure.c $(OBJECTS)

items.o: items.c item.h
	gcc $(CFLAGS) items.c

salas.o: salas.c salas.h
	gcc $(CFLAGS) salas.c

mapa.o: mapa.c mapa.h
	gcc $(CFLAGS) mapa.c

movimentos.o: movimentos.c movimentos.h
	gcc $(CFLAGS) movimentos.c

menu.o: menu.c menu.h
	gcc $(CFLAGS) menu.c

selecao.o: selecao.c selecao.h
	gcc $(CFLAGS) selecao.c

batalha.o: batalha.c batalha.h
	gcc $(CFLAGS) batalha.c

clean:
	rm *.o
	rm a.out
