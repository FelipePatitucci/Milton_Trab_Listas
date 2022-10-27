// Definição da classe Item

#ifndef ELETRONICO_H
#define ELETRONICO_H

#include <string>
#include "Item.h"
using namespace std;

class Eletronico : public Item {
public:

	string marca;
	string modelo;
	string fabricante;
	string descricao;

	Eletronico();
	virtual ~Eletronico();

	void criaEletronico(int t_id, string t_nome, float t_preco,
		string t_marca, string t_modelo, string t_fabricante,
		string t_descricao);

	void infosItem(void);

protected:

private:

};

#endif