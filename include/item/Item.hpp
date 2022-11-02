#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>

using namespace std;

enum TipoProduto
{
	LIVRO,
	ROUPA,
	ELETRONICO,
};

class Item
{
	private:

	protected:
		TipoProduto	produto;
		int			id;
		string		nome;
		double		preco;
		string		loja;


	public:

		Item(void);
		Item(TipoProduto produto, int id, string nome, double preco, string loja);
		virtual ~Item(void);

		string	getNome(void);
		double	getPreco(void);

		virtual void infos(void) = 0;

};

#endif