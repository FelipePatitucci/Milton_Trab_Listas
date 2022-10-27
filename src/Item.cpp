// Métodos da classe Item

#include "../include/Item.h"
#include <iostream>
#include <string>

Item::Item() {
	//ctor
};

Item::~Item() {
	//dtor
};

void Item::infos(void) {
	cout << "Informações do Item " << id << endl;
	cout << "---------------------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Preço: R$ " << preco << endl;
};
