#include "Cliente.hpp"

Cliente::Cliente(void): Conta() {
	cpf = "";
	carteira = 0.0;
	cartaoConfigurado = "";
}

Cliente::Cliente(TipoConta conta, string nome, string senha, string estado, string cidade,
	string cep, string complemento, string email, string telefone,
	string cpf, double carteira, string cartaoConfigurado):
	Conta(conta, nome, senha, estado, cidade, cep, complemento, email, telefone) {
	this->cpf = cpf;
	this->carteira = carteira;
	this->cartaoConfigurado = cartaoConfigurado;
}

Cliente::~Cliente(void) {
	return ;
}

void Cliente::infos(void) {
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
	cout << "CPF " << cpf << endl;
	cout << "Carteira " << carteira << endl;
	cout << "---------------------------" << endl;
}
