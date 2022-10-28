#include "Roupa.hpp"

Roupa::Roupa(void): Item() {
	tamanho = "";
	marca = "";
	genero = "";
	cor = "";
	material = "";
};

Roupa::Roupa(int id, string nome, double preco, string loja,
			string marca, string genero, string tamanho, string cor,
			string material):
	Item(id, nome, preco, loja) {
	this->tamanho = tamanho;
	this->marca = marca;
	this->genero = genero;
	this->cor = cor;
	this->material = material;
};

Roupa::~Roupa() {
	return ;
};

void Roupa::infos(void) {
	cout << "---------------------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Preço: " << preco << endl;
	cout << "Marca: " << marca << endl;
	cout << "Gênero: " << genero << endl;
	cout << "Tamanho: " << tamanho << endl;
	cout << "Cor: " << cor << endl;
	cout << "Material: " << material << endl;
	cout << "---------------------------" << endl;
};
