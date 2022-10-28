#ifndef NO_H
#define NO_H

#include "Item.h"

template <typename T>
class NoItem
{
public:

    NoItem();
    virtual ~NoItem();
    NoItem(T d) {item = d; prox = nullptr;}
    Item Get(void) { return item; }
    void Print(void) {item.infos();} // só para testes

protected:

private:

    T item;
    NoItem *prox; 
    template <typename L>
    friend class ListaItem;
};

#endif 