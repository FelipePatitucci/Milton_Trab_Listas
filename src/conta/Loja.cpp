#include "Loja.hpp"

Loja::Loja(void): Conta() {
	cnpj = "";
	itens = Lista<Item>();
}

Loja::Loja(TipoConta conta, string nome, string senha, string estado, string cidade,
	string cep, string complemento, string email, string telefone, string cnpj):
	Conta(conta, nome, senha, estado, cidade, cep, complemento, email, telefone) {
	this->cnpj = cnpj;
	itens = Lista<Item>();
}

Loja::~Loja(void) {
	return ;
}

void	Loja::cadastrarItem(Item* item) {
	itens.inserir(item);
}

void	Loja::excluirItem(string nome) {
	itens.deletar(nome);
}

void	Loja::mostrarItens(void) {
	itens.exibeLista();
}

void	Loja::infos(void) {
	Conta::infos();
	cout << "| CNPJ: " << cnpj << endl;
	cout << "| Itens A Venda:" << endl;
	mostrarItens();
	cout << "\\___________________________" << endl << endl;
}
