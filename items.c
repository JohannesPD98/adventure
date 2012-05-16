#include "item_actions.h"

#define ITEM_COUNT 1

struct object {
    const char* name;
    int (*action)(void);
};

static struct object item_index[ITEM_COUNT] = {
    {"NOTHING", do_nothing}
};

int use_item(unsigned int item)
{
    return item_index[item].action();
}
