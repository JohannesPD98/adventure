#include "item_actions.h"

#define ITEM_COUNT 2

struct object {
    const char* name;
    int (*action)(void);
};

static struct object item_index[ITEM_COUNT] = {
    {"NOTHING", do_nothing},
    {"SOMETHING", do_something}
};

int use_item(unsigned int item)
{
    return item_index[item].action();
}
