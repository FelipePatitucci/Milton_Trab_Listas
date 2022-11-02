#ifndef ECOMMERCE_HPP
#define ECOMMERCE_HPP

#include "Livro.hpp"
#include "Roupa.hpp"
#include "Eletronico.hpp"

#include "Cliente.hpp"
#include "Loja.hpp"

class ECommerce
{
	private:
		Lista<Conta>	listaContas;

	protected:

	public:
		ECommerce(void);
		~ECommerce(void);

		void	menuInicial(void);


	private:
		void	cabecalhoInicial(void);

		void	menuLogin(void);

		Conta*	buscarConta(void);
		bool	acessarConta(Conta* conta);

};

#endif
