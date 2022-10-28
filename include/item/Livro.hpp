#ifndef LIVRO_H
#define LIVRO_H

#include "Item.hpp"

using namespace std;

class Livro : public Item
{
	private:
		string autor;
		int numeroPaginas;
		string genero;
		string idioma;
		int anoLancamento;

	protected:

	public:
		Livro(void);
		Livro(int id, string nome, double preco, string loja,
			string autor, int numeroPaginas, string genero, string idioma,
			int anoLancamento);
		~Livro(void);

		void	infos(void);

};

#endif
