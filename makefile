CFLAGS = -Wall -c -I include
OBJECTS = inventory.o

adventure: $(OBJECTS)
	gcc -o build/adventure $(OBJECTS)

inventory.o: inventory.c include/item.h
	gcc $(CFLAGS) inventory.c 

clean:
	rm *.o
	rm build/adventure