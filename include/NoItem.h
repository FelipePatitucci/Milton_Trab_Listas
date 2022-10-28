#ifndef NO_H
#define NO_H

#include "Item.h"

class NoItem
{
public:

    NoItem();
    virtual ~NoItem();
    void colocaItem(Item d);
    Item Get(void) { return item; }

protected:

private:

    Item item;
    NoItem *prox; 
    friend class ListaItem;
};

#endif 