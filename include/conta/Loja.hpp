#ifndef LOJA_HPP
#define LOJA_HPP

#include "Lista.hpp"
#include "Conta.hpp"
#include "Item.hpp"

class Loja : public Conta
{
	private:
		string	cnpj;
		Lista<Item> itens;

	protected:

	public:
		Loja(void);
		Loja(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone,
			string cnpj);
		~Loja(void);

		void	cadastrarItem(Item* item);
		void	excluirItem(string nome);
		void	mostrarItens(void);

		void	infos(void);

};

#endif
