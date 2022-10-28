#ifndef LISTA_H
#define LISTA_H

#include "NoItem.h"

template <typename L>
class ListaItem
{
    public:
        ListaItem();
        virtual ~ListaItem();
        void Put(NoItem<L> *ptr_novo);
        void insereNo(L);
        void exibeLista(void);

    protected:

    private:
        NoItem<L> *topo;
        NoItem<L> *fim;
        int tamanho;
};

#endif 