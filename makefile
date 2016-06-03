CFLAGS = -Wall -c -I include
OBJECTS = salas.o mapa.o

adventure: $(OBJECTS)
	gcc  adventure.c $(OBJECTS)

inventory.o: inventory.c include/item.h
	gcc $(CFLAGS) inventory.c

items.o: items.c include/item.h include/item_actions.h
	gcc $(CFLAGS) items.c

item_actions.o: item_actions.c include/item.h
	gcc $(CFLAGS) item_actions.c

salas.o: salas.c salas.h
	gcc $(CFLAGS) salas.c

mapa.o: mapa.c mapa.h
	gcc $(CFLAGS) mapa.c



clean:
	rm *.o
	rm a.out
