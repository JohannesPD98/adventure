#ifndef __ITEM_H
#define __ITEM_H

typedef struct inv_item {
    char* name;
    unsigned int quantity;
    struct inv_item* next;
} Item;

#endif /*__ITEM_H*/
