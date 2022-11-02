#include "Conta.hpp"

Conta::Conta(void) {
	conta = TipoConta();
	nome = "";
	senha = "";
	estado = "";
	cidade = "";
	cep = "";
	complemento = "";
	email = "";
	telefone = "";
}

Conta::Conta(TipoConta conta, string nome, string senha, string estado, string cidade,
			string cep, string complemento, string email, string telefone) {
	this->conta = conta;
	this->nome = nome;
	this->senha = senha;
	this->estado = estado;
	this->cidade = cidade;
	this->cep = cep;
	this->complemento = complemento;
	this->email = email;
	this->telefone = telefone;
}

Conta::~Conta(void) {
	return ;
}

TipoConta	Conta::getConta(void) {
	return conta;
}

string	Conta::getNome(void) {
	return nome;
}

bool	Conta::verificarSenha(string senha) {
	if (this->senha == senha)
		return true;
	else
		return false;
}

void	Conta::infos(void) {
	cout << " ___________________________" << endl;
	cout << "/" << endl;
	cout << "| Tipo de Conta: " << (conta == CLIENTE? "Cliente" : "Loja") << endl;
	cout << "| __________________________" << endl;
	cout << "|" << endl;
	cout << "| Nome: " << nome << endl;
	cout << "| Estado: " << estado << endl;
	cout << "| Cidade: " << cidade << endl;
	cout << "| Cep: " << cep << endl;
	cout << "| Complemento: " << complemento << endl;
	cout << "| Email: " << email << endl;
	cout << "| Telefone: " << telefone << endl;
}
