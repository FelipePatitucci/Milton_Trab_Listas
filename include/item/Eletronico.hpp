#ifndef ELETRONICO_HPP
#define ELETRONICO_HPP

#include "Item.hpp"

class Eletronico : public Item
{
	private:
		string	marca;
		string	modelo;
		string	fabricante;
		string	descricao;

	protected:

	public:
		Eletronico(void);
		Eletronico(int id, string nome, double preco, string loja,
			string marca, string modelo, string fabricante, string descricao);
		~Eletronico(void);

		void	infos(void);

};

#endif
