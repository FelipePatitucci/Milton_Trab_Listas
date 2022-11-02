#include "Eletronico.hpp"

Eletronico::Eletronico(void): Item() {
	marca = "";
	modelo = "";
	fabricante = "";
	descricao = "";
}

Eletronico::Eletronico(TipoProduto produto, int id, string nome, double preco, string loja,
			string marca, string modelo, string fabricante, string descricao):
	Item(produto, id, nome, preco, loja) {
	this->marca = marca;
	this->modelo = modelo;
	this->fabricante = fabricante;
	this->descricao = descricao;
}

Eletronico::~Eletronico(void) {
	return ;
}

void Eletronico::infos(void) {
	Item::infos();
	cout << "|	Marca: " << marca << endl;
	cout << "|	Modelo: " << modelo << endl;
	cout << "|	Fabricante: " << fabricante << endl;
	cout << "|	Descrição: " << descricao << endl;
	cout << "|	---------------------------" << endl;
}
