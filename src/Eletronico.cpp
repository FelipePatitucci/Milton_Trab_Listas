#include "../include/Eletronico.h"
#include <iostream>
#include <string>

Eletronico::Eletronico() {
	//ctor
};

Eletronico::~Eletronico() {
	//dtor
};

void Eletronico::infos(void) {
	Item::infos();
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "Fabricante: " << fabricante << endl;
	cout << "Descrição: " << descricao << endl;
	cout << "---------------------------" << endl;
};

void Eletronico::criaEletronico(int t_id, string t_nome, float t_preco,
	string t_marca, string t_modelo, string t_fabricante,
	string t_descricao) {
		Item::criaItem(t_id, t_nome, t_preco);
	 	fabricante = t_fabricante;
	 	marca = t_marca;
	 	modelo = t_modelo;
	 	descricao = t_descricao;
};