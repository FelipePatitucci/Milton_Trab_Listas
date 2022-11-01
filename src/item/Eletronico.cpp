#include "Eletronico.hpp"

Eletronico::Eletronico(void): Item() {
	marca = "";
	modelo = "";
	fabricante = "";
	descricao = "";
}

Eletronico::Eletronico(int id, string nome, double preco, string loja,
			string marca, string modelo, string fabricante, string descricao):
	Item(id, nome, preco, loja) {
	this->marca = marca;
	this->modelo = modelo;
	this->fabricante = fabricante;
	this->descricao = descricao;
}

Eletronico::~Eletronico(void) {
	return ;
}

void Eletronico::infos(void) {
	cout << endl;
	cout << "Nome: " << nome << endl;
	cout << "Preço: " << preco << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "Fabricante: " << fabricante << endl;
	cout << "Descrição: " << descricao << endl;
	cout << endl;
}
