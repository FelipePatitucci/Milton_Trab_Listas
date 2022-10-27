#include <bits/stdc++.h>
#include <iostream>
#include <string>

#include "include/Livro.h"
#include "include/Roupa.h"
#include "include/Eletronico.h"
//Inclui só pra facilitar testar sem ter q ficar compilando tudo
//#include "src/Item.cpp"
//#include "src/Livro.cpp"
//#include "src/Roupa.cpp"
//#include "src/Eletronico.cpp"
using namespace std;

int main() {
	Livro livro;
	livro.criaLivro(10001, "O Som da Montanha", 29.99,
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972);
	livro.infosItem();
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