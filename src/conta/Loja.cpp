#include "Loja.hpp"

Loja::Loja(void): Conta() {
	cnpj = "";
}

Loja::Loja(TipoConta conta, string nome, string senha, string estado, string cidade,
	string cep, string complemento, string email, string telefone, string cnpj):
	Conta(conta, nome, senha, estado, cidade, cep, complemento, email, telefone) {
	this->cnpj = cnpj;
}

Loja::~Loja(void) {
	return ;
}

void	Loja::infos(void) {
	cout << "---------------------------" << endl;
	cout << "Tipo de Conta: " << (conta == CLIENTE? "Cliente" : "Loja") << endl;
	cout << "---------------------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Estado: " << estado << endl;
	cout << "Cidade " << cidade << endl;
	cout << "Cep " << cep << endl;
	cout << "Complemento " << complemento << endl;
	cout << "Email " << email << endl;
	cout << "Telefone " << telefone << endl;
	cout << "CNPJ " << cnpj << endl;
	cout << "Produtos:" << endl;
	produtos.exibeLista();
	cout << "---------------------------" << endl << endl;
}

void	Loja::addItem(Item *item)
{
	produtos.add(item);
}
