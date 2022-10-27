// Definição da classe Item

#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
public:
	string nome;
	float preco;

	Item();
	virtual ~Item();
	void criaItem(int t_id, string t_nome, float t_preco) {
	id = t_id;
	nome = t_nome;
	preco = t_preco;
	};

	void infos(void);

protected:

private:
	int id;

};

#endif