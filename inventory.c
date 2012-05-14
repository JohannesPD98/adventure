#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "item.h"

#define LETTER_INDEX 52

Item* inv_index[LETTER_INDEX];

void init_inventory()
{
    int i;
    for(i = 0; i < LETTER_INDEX; i++)
	inv_index[i] = NULL;
}

//FINISH!!!
int add_to_inventory()
{
    return 0;
}

void print_inventory()
{
    char empty = 1;
    int i;
    Item *item;
    for(i = 0; i < LETTER_INDEX; i++) {
	item = inv_index[i];
	while(item != NULL) {
	    empty = 0;
	    printf("%s, %u\n", item->name, item->quantity);
	    item = item->next;
	}
    }
    if(empty)
	puts("YOUR INVENTORY IS EMPTY.");
}

int main(int argc, char* argv[])
{
    init_inventory();
    print_inventory();
    return 0;
}
