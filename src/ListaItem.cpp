#include "../include/ListaItem.h"

#include <iostream>
#include <string>
using namespace std;

ListaItem::ListaItem()
{
    topo = nullptr;
    fim = nullptr;
    tamanho = 0;
}

ListaItem::~ListaItem()
{

}

// usada apenas indiretamente pela insereNo
void ListaItem::Put(NoItem *ptr_novo)
{
    if ( topo == nullptr )
        topo = fim = ptr_novo;
    else
        fim->prox = ptr_novo;
    fim = ptr_novo;
}

void ListaItem::insereNo(NoItem no_item)
{
    NoItem *ptr_novo = new NoItem(no_item);
    Put(ptr_novo);
}

void ListaItem::exibeLista(void)
{
    NoItem *aux = nullptr; //teste

    aux = topo;
    while( aux != nullptr )
    {
        (aux->item).infos();
        aux = aux->prox;
    }
}