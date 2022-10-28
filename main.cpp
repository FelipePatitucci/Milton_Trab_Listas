#include <bits/stdc++.h>
#include <iostream>
#include <string>

#include "include/NoItem.h"
#include "include/ListaItem.h"
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
	ListaItem<Livro> lista_livros;
	//ListaItem<Roupa> lista_roupas;
	//ListaItem<Eletronico> lista_eletronicos;
	Livro livro1, livro2;
	Roupa roupa;
	Eletronico eletronico;
	livro1.criaLivro(10001, "O Som da Montanha", 29.99,
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972);
	livro2.criaLivro(10002, "E Não Sobrou Nenhum", 19.99,
		"Agatha Christie", 350, "Suspense", "Portugues", 1987);
	roupa.criaRoupa(10002, "Camisa Simples", 79.99,
		"Adidas", "Masculino", "M", "Preta", "Poliéster");
	eletronico.criaEletronico(10003, "Placa de Vídeo", 1499.99,
		"NVIDIA", "GTX 1660 6GB", "Galax", "Mto braba!");
	lista_livros.insereNo(livro1);
	lista_livros.insereNo(livro2);
	lista_livros.exibeLista();
	/*lista_livros.insereNo(livro2);
	lista_roupas.insereNo(roupa);
	lista_eletronicos.insereNo(eletronico);
	lista_livros.exibeLista();
	lista_roupas.exibeLista();
	lista_eletronicos.exibeLista();*/
	return 1;
}