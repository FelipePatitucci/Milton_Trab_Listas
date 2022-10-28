#include "../include/Roupa.h"
#include <iostream>
#include <string>

Roupa::Roupa() {
	//ctor
};

Roupa::~Roupa() {
	//dtor
};

void Roupa::infos(void) {
	Item::infos();
	cout << "Marca: " << marca << endl;
	cout << "Gênero: " << genero << endl;
	cout << "Tamanho: " << tamanho << endl;
	cout << "Cor: " << cor << endl;
	cout << "Material: " << material << endl;
	cout << "---------------------------" << endl;
};

void Roupa::criaRoupa(int t_id, string t_nome, float t_preco,
	string t_marca, string t_genero, string t_tamanho,
	string t_cor, string t_material) {
		Item::criaItem(t_id, t_nome, t_preco);
	 	tamanho = t_tamanho;
	 	marca = t_marca;
	 	genero = t_genero;
	 	cor = t_cor;
		material = t_material;
};