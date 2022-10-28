#ifndef LOJA_HPP
#define LOJA_HPP

#include "Conta.hpp"

class Loja : public Conta
{
	private:
		string	cnpj;

	protected:

	public:
		Loja(void);
		Loja(string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone,
			string cnpj);
		~Loja(void);

		void	infos(void);

};

#endif
