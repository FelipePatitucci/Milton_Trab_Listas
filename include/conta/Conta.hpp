#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>

using namespace std;

enum TipoConta
{
	CLIENTE,
	LOJA
};

class Conta
{
	private:

	protected:
		TipoConta	conta;
		string		nome;
		string		senha;
		string		estado;
		string		cidade;
		string		cep;
		string		complemento;
		string		email;
		string		telefone;

	public:
		Conta(void);
		Conta(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone);
		virtual ~Conta(void);

		virtual void	infos(void) = 0;

};

#endif
