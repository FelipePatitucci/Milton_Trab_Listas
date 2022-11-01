#ifndef ECOMMERCE_HPP
#define ECOMMERCE_HPP

#include "Cliente.hpp"
#include "Loja.hpp"

class ECommerce
{
	private:
		TipoConta		contaLogada;
		Lista<Conta>	listaContas;

	protected:

	public:
		ECommerce(void);
		~ECommerce(void);

		void	cabecalhoInicial(void);

		void	menuInicial(void);
		void	menuLogin(void);
		void	menuCadastro(void);

};

#endif
