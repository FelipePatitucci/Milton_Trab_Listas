#include "Loja.hpp"

Loja::Loja(void): Conta() {
	cnpj = "";
}

Loja::Loja(string nome, string senha, string estado, string cidade,
	string cep, string complemento, string email, string telefone, string cnpj):
	Conta(nome, senha, estado, cidade, cep, complemento, email, telefone) {
	this->cnpj = cnpj;
}

Loja::~Loja(void) {
	return ;
};

void Loja::infos(void) {
	cout << "---------------------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Estado: " << estado << endl;
	cout << "Cidade " << cidade << endl;
	cout << "Cep " << cep << endl;
	cout << "Complemento " << complemento << endl;
	cout << "Email " << email << endl;
	cout << "Telefone " << telefone << endl;
	cout << "CNPJ " << cnpj << endl;
	cout << "---------------------------" << endl;
};
