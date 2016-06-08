#ifndef __ITEM_H
#define __ITEM_H

typedef struct inv_item {
    unsigned int id;
    unsigned int quantity;
    struct inv_item* next;
} Item;

/*Begin item ids*/
#define NOTHING 0
#define SOMETHING 1
/*End item ids  */

int use_item(unsigned int);

#endif /*__ITEM_H*/
