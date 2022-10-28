#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
#include "No.hpp"

using namespace std;

template <typename L>
class Lista
{
	private:
		int		tamanho;
		No<L>	*topo;

	protected:

	public:
		Lista(void): tamanho(0), topo(nullptr) {};
		~Lista(void);

		void	add(L *novo);
		L*		get(int index);
		int		len(void);
		void	exibeLista(void);

};

template <typename L>
Lista<L>::~Lista()
{
	No<L>*	aux1 = nullptr;
	No<L>*	aux2 = nullptr;

	if (topo == nullptr)
		return;
	aux1 = topo;
	while (aux1)
	{
		aux2 = aux1->prox;
		delete aux1;
		aux1 = aux2;
	}
	topo = nullptr;
}

template <typename L>
void	Lista<L>::add(L *novo)
{
	No<L>*	noNovo = new No<L>(novo);
	No<L>*	aux;

	if (topo == nullptr)
		topo = noNovo;
	else {
		aux = topo;
		while (aux->prox)
			aux = aux->prox;
		aux->prox = noNovo;
	}
	tamanho++;
}

template <typename L>
L*		Lista<L>::get(int index)
{
	No<L> aux =	nullptr;

	if (index >= 0 && index < tamanho)
	{
		aux = topo;
		while (index--)
			aux = aux->prev;
		return aux->item;
	}
	else
		return nullptr;
}

template <typename L>
int		Lista<L>::len(void)
{
	return tamanho;
}

template <typename L>
void	Lista<L>::exibeLista(void)
{
	No<L>*	aux = nullptr;

	aux = topo;
	while (aux)
	{
		aux->item->infos();
		aux = aux->prox;
	}
}

#endif
