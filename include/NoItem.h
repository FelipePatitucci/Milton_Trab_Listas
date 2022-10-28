#ifndef NO_H
#define NO_H

#include "Item.h"

template <typename T>
class NoItem
{
public:

    NoItem();
    virtual ~NoItem();
    void colocaItem(T d);
    Item Get(void) { return item; }

protected:

private:

    T item;
    NoItem *prox; 
    template <typename L>
    friend class ListaItem;
};

#endif 