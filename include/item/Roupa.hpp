#ifndef ROUPA_H
#define ROUPA_H

#include "Item.hpp"

class Roupa : public Item
{
	private:
		string tamanho;
		string marca;
		string genero;
		string cor;
		string material;

	protected:

	public:
		Roupa(void);
		Roupa(int id, string nome, double preco, string loja,
			string marca, string genero, string tamanho, string cor,
			string material);
		~Roupa(void);

		void	infos(void);

};

#endif
