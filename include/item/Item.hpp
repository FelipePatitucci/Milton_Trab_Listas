#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>

using namespace std;

class Item
{
	private:

	protected:
		int		id;
		string	nome;
		double	preco;
		string	loja;

	public:

		Item(void);
		Item(int id, string nome, double preco, string loja);
		virtual ~Item(void);

		virtual void infos(void) {};

};

#endif