#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>

using namespace std;

class Conta
{
	private:

	protected:
		string	nome;
		string	senha;
		string	estado;
		string	cidade;
		string	cep;
		string	complemento;
		string	email;
		string	telefone;

	public:
		Conta(void);
		Conta(string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone);
		~Conta(void);

		virtual void	infos(void) = 0;

};

#endif
