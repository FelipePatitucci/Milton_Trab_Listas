#include "Cliente.hpp"

Cliente::Cliente(void): Conta() {
	cpf = "";
	carteira = 0.0;
	cartaoConfigurado = "";
	pedido = Pedido();
}

Cliente::Cliente(TipoConta conta, string nome, string senha, string estado, string cidade,
	string cep, string complemento, string email, string telefone,
	string cpf, double carteira, string cartaoConfigurado):
	Conta(conta, nome, senha, estado, cidade, cep, complemento, email, telefone) {
	this->cpf = cpf;
	this->carteira = carteira;
	this->cartaoConfigurado = cartaoConfigurado;
	this->pedido = Pedido(nome);
}

Cliente::~Cliente(void) {
	return ;
}

void	Cliente::comprarItem(Item* item) {
	pedido.adicionarItem(item);
}

void	Cliente::cancelarItem(string nome) {
	pedido.excluirItem(nome);
}

void	Cliente::mostrarPedido(void) {
	pedido.info();
}

void Cliente::infos(void) {
	Conta::infos();
	cout << "| CPF: " << cpf << endl;
	cout << "| Carteira: R$ " << carteira << endl;
	cout << "| Pedido:" << endl;
	cout << "|" << endl;
	pedido.info();
	cout << "\\___________________________" << endl << endl;
}
