#ifndef LOJA_HPP
#define LOJA_HPP

#include "Lista.hpp"
#include "Livro.hpp"
#include "Roupa.hpp"
#include "Eletronico.hpp"
#include "Conta.hpp"

class Loja : public Conta
{
	private:
		string	cnpj;
		Lista<Item> produtos;

	protected:

	public:
		Loja(void);
		Loja(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone,
			string cnpj);
		~Loja(void);

		void	infos(void);
		void	addItem(Item *item);

};

#endif
