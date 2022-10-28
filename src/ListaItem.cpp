#include "../include/ListaItem.h"

#include <iostream>
#include <string>
using namespace std;

template <typename L>
ListaItem<L>::ListaItem()
{
    topo = nullptr;
    fim = nullptr;
    tamanho = 0;
}

template <typename L>
ListaItem<L>::~ListaItem()
{
    delete topo;
    delete fim;
}

// usada apenas indiretamente pela insereNo

template <typename L>
void ListaItem<L>::Put(NoItem<L> *ptr_novo) //era NoItem<T>
{
    if ( topo == nullptr )
        topo = fim = ptr_novo;
    else
        fim->prox = ptr_novo;
        fim = ptr_novo;
}


template <typename L>
void ListaItem<L>::insereNo(L no_item)
{
    NoItem<L> *ptr_novo = new NoItem<L>(no_item);
    Put(ptr_novo);
    tamanho ++;
}

template <typename L>
void ListaItem<L>::exibeLista(void)
{
    NoItem<L> *aux = nullptr; //teste

    aux = topo;
    while( aux != nullptr )
    {
        (aux->item).infos();
        aux = aux->prox;
    }
}