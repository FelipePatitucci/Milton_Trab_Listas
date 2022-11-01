#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Conta.hpp"

class Cliente : public Conta
{
	private:
		string	cpf;
		double	carteira;
		string	cartaoConfigurado;

	protected:

	public:
		Cliente(void);
		Cliente(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone,
			string cpf, double carteira, string cartaoConfigurado);
		~Cliente(void);

		void	infos(void);

};

#endif
