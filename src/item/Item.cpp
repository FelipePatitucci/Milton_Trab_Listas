#include "Item.hpp"

Item::Item() {
	produto = TipoProduto();
	id = 0;
	nome = "";
	preco = 0.0;
	loja = "";
}

Item::Item(TipoProduto produto, int id, string nome, double preco, string loja) {
	this->produto = produto;
	this->id = id;
	this->nome = nome;
	this->preco = preco;
	this->loja = loja;
}

Item::~Item() {
	return ;
}

string	Item::getNome(void) {
	return nome;
}

double	Item::getPreco(void) {
	return preco;
}

void	Item::infos(void) {
	cout << "|" << endl;
	cout << "|	---------------------------" << endl;
	cout << "|	Categoria: ";
	switch (produto)
	{
		case LIVRO:
			cout << "Livro";
			break;
		case ROUPA:
			cout << "Roupa";
			break;
		case ELETRONICO:
			cout << "Eletrônico";
			break;
		default:
			cout << "Indefinido";
	}
	cout << endl;
	cout << "|	---------------------------" << endl;
	cout << "|	Nome: " << nome << endl;
	cout << "|	Preço: R$ " << preco << endl;
	cout << "|	Loja: " << loja << endl;
}
