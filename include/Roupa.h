// Definição da classe Item

#ifndef ROUPA_H
#define ROUPA_H

#include <string>
#include "Item.h"
using namespace std;

class Roupa : public Item {
public:

	string tamanho;
	string marca;
	string genero;
	string cor;
	string material;

	Roupa();
	virtual ~Roupa();

	void criaRoupa(int t_id, string t_nome, float t_preco,
		string t_marca, string t_genero, string t_tamanho,
		string t_cor, string t_material);

	void infos(void);

protected:

private:

};

#endif