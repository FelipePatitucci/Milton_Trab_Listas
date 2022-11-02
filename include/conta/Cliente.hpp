#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Conta.hpp"
#include "Pedido.hpp"

class Cliente : public Conta
{
	private:
		string	cpf;
		double	carteira;
		string	cartaoConfigurado;
		Pedido	pedido;

	protected:

	public:
		Cliente(void);
		Cliente(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone,
			string cpf, double carteira, string cartaoConfigurado);
		~Cliente(void);

		void	comprarItem(Item* item);
		void	cancelarItem(string nome);
		void	mostrarPedido(void);

		void	infos(void);

};

#endif
