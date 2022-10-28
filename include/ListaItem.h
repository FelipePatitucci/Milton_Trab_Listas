#ifndef LISTA_H
#define LISTA_H

#include "NoItem.h"

class ListaItem
{
    public:
        ListaItem();
        virtual ~ListaItem();
        void Put(NoItem *ptr_novo);
        void insereNo(NoItem d);
        void exibeLista(void);

    protected:

    private:
        NoItem *topo;
        NoItem *fim;
        int tamanho;
};

#endif 