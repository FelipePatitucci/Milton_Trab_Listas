#include <bits/stdc++.h>
#include <iostream>
#include <string>

#include "include/NoItem.h"
#include "include/ListaItem.h"
#include "include/Item.h"
#include "include/Livro.h"
#include "include/Roupa.h"
#include "include/Eletronico.h"
#include "src/NoItem.cpp"
#include "src/ListaItem.cpp"
#include "src/Item.cpp"
#include "src/Livro.cpp"
#include "src/Roupa.cpp"
#include "src/Eletronico.cpp"
using namespace std;

int main() {
	Item teste1, teste2;
	NoItem no1, no2, no3;
	ListaItem lista1;
	teste1.criaItem(1, "Mesa", 1000.55);
	teste2.criaItem(2, "Cadeira", 555.55);
	Livro livro;
	livro.criaLivro(10001, "O Som da Montanha", 29.99,
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972);
	no1.colocaItem(teste1);
	no2.colocaItem(teste2);
	no3.colocaItem(livro);
	lista1.insereNo(no1);
	lista1.insereNo(no2);
	lista1.insereNo(no3);
	lista1.exibeLista();
	livro.criaLivro(10001, "O Som da Montanha", 29.99,
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972);
	livro.infos();
	Roupa roupa;
	roupa.criaRoupa(10002, "Camisa Simples", 79.99,
		"Adidas", "Masculino", "M", "Preta", "Poliéster");
	roupa.infosItem();
	Eletronico eletronico;
	eletronico.criaEletronico(10003, "Placa de Vídeo", 1499.99,
		"NVIDIA", "GTX 1660 6GB", "Galax", "Mto braba!");
	eletronico.infosItem();
	return 1;
}