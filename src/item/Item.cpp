#include "Item.hpp"

Item::Item() {
	id = 0;
	nome = "";
	preco = 0.0;
	loja = "";
}

Item::Item(int id, string nome, double preco, string loja) {
	this->id = id;
	this->nome = nome;
	this->preco = preco;
	this->loja = loja;
}

Item::~Item() {
	return ;
}
