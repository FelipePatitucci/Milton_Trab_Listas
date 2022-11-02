#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
#include "No.hpp"

using namespace std;

template <typename T>
class Lista
{
	private:
		int		tamanho;
		No<T>*	topo;
		No<T>*	fim;

	protected:

	public:
		Lista(void): tamanho(0), topo(nullptr), fim(nullptr) {};
		~Lista(void);

		int		getTamanho(void);
		T*		getNo(int index);

		void	inserir(T* novo);
		T*		buscar(string nome);
		void	deletar(string nome);

		void	exibeLista(void);

};

template <typename T>
Lista<T>::~Lista(void)
{
	No<T>*	aux1 = nullptr;
	No<T>*	aux2 = nullptr;

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
};

template <typename T>
int		Lista<T>::getTamanho(void)
{
	return tamanho;
}

template <typename L>
L*		Lista<L>::getNo(int index)
{
	No<L>*	aux =	nullptr;

	if (index >= 0 && index < tamanho)
	{
		aux = topo;
		while (index--)
			aux = aux->prox;
		return aux->item;
	}
	else
		return nullptr;
}

template <typename T>
void	Lista<T>::inserir(T *novo)
{
	No<T>*	noNovo = new No<T>(novo);

	if (topo == nullptr)
	{
		topo = noNovo;
		fim = noNovo;
	}
	else
	{
		fim->prox = noNovo;
		noNovo->prev = fim;
		fim = noNovo;
	}
	tamanho++;
};

template <typename T>
T*		Lista<T>::buscar(string nome)
{
	No<T>*	aux =	nullptr;

	aux = topo;
	while (aux)
	{
		if (aux->item->getNome() == nome)
			break;
		aux = aux->prox;
	}
	if (aux)
		return aux->item;
	else
		return nullptr;
};

template <typename T>
void	Lista<T>::deletar(string nome)
{
	No<T>*	aux1 =	nullptr;

	aux1 = topo;
	while (aux1)
	{
		if (aux1->item->getNome() == nome)
			break;
		aux1 = aux1->prox;
	}
	if (aux1)
	{
		if (topo == fim)
		{
			topo = nullptr;
			fim = nullptr;
		}
		else if (aux1->prev == nullptr)
		{
			topo = aux1->prox;
			topo->prev = nullptr;
		}
		else if (aux1->prox == nullptr)
		{
			fim = aux1->prev;
			fim->prox = nullptr;
		}
		else
		{
			aux1->prev->prox = aux1->prox;
			aux1->prox->prev = aux1->prev;
		}
		delete aux1;
		tamanho--;
	}
};

template <typename T>
void	Lista<T>::exibeLista(void)
{
	No<T>*	aux = nullptr;

	aux = topo;
	while (aux)
	{
		aux->item->infos();
		aux = aux->prox;
	}
};

#endif
