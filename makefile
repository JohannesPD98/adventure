CFLAGS = -Wall -c -I include
OBJECTS = inventory.o items.o item_actions.o

adventure: $(OBJECTS)
	gcc -o build/adventure $(OBJECTS)

inventory.o: inventory.c include/item.h
	gcc $(CFLAGS) inventory.c

items.o: items.c include/item.h include/item_actions.h
	gcc $(CFLAGS) items.c

item_actions.o: item_actions.c include/item.h
	gcc $(CFLAGS) item_actions.c

clean:
	rm *.o
	rm build/adventure