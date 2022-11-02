#include "Livro.hpp"

Livro::Livro(void): Item() {
	autor = "";
	numeroPaginas = 0;
	genero = "";
	idioma = "";
	anoLancamento = 0;
}

Livro::Livro(TipoProduto produto, int id, string nome, double preco, string loja,
			string autor, int numeroPaginas, string genero, string idioma,
			int anoLancamento):
	Item(produto, id, nome, preco, loja) {
	this->autor = autor;
	this->numeroPaginas = numeroPaginas;
	this->genero = genero;
	this->idioma = idioma;
	this->anoLancamento = anoLancamento;
}

Livro::~Livro(void) {
	return ;
}

void Livro::infos(void) {
	Item::infos();
	cout << "|	Autor: " << autor << endl;
	cout << "|	Gênero: " << genero << endl;
	cout << "|	Idioma: " << idioma << endl;
	cout << "|	Número de Páginas: " << numeroPaginas << endl;
	cout << "|	Ano de Lançamento: " << anoLancamento << endl;
	cout << "|	---------------------------" << endl;
}
