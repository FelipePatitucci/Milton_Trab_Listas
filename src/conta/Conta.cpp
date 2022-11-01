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
