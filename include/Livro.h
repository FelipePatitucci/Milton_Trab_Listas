// Definição da classe Item

#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include "Item.h"
using namespace std;

class Livro : public Item {
public:

	string autor;
	int numeroPaginas;
	string genero;
	string idioma;
	int anoLancamento;

	Livro();
	virtual ~Livro();

	void criaLivro(int t_id, string t_nome, float t_preco,
		string t_autor, int t_numeroPaginas, string t_genero,
		string t_idioma, int t_anoLancamento);

	void infosItem(void);

protected:

private:

};

#endif