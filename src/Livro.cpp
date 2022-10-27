#include "../include/Livro.h"
#include <iostream>
#include <string>

Livro::Livro() {
	//ctor
};

Livro::~Livro() {
	//dtor
};

void Livro::infosItem(void) {
	Item::infos();
	cout << "Autor: " << autor << endl;
	cout << "Gênero: " << genero << endl;
	cout << "Idioma: " << idioma << endl;
	cout << "Número de Páginas: " << numeroPaginas << endl;
	cout << "Ano de Lançamento: " << anoLancamento << endl;
	cout << "---------------------------" << endl;
};

void Livro::criaLivro(int t_id, string t_nome, float t_preco,
	string t_autor, int t_numeroPaginas, string t_genero,
	string t_idioma, int t_anoLancamento) {
	Item::criaItem(t_id, t_nome, t_preco);
	autor = t_autor;
	numeroPaginas = t_numeroPaginas;
	genero = t_genero;
	idioma = t_idioma;
	anoLancamento = t_anoLancamento;
};