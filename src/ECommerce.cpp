#include "ECommerce.hpp"

ECommerce::ECommerce(void) {
	contaLogada = TipoConta();
	listaContas.add(new Loja(LOJA, "Bramazon", "bolodebata1@", "Rio de Janeiro",
		"Rio de Janeiro", "20220-142", "Segundo Andar", "bramazon@gmail.com",
		"998765432", "64.725.872/0001-08"));
	((Loja*)listaContas.get(0))->addItem(new Livro(10001, "O Som da Montanha", 29.99, "tititi",
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972));
	((Loja*)listaContas.get(0))->addItem(new Livro(10002, "E Não Sobrou Nenhum", 19.99, "iytra",
		"Agatha Christie", 350, "Suspense", "Portugues", 1987));
	((Loja*)listaContas.get(0))->addItem(new Roupa(10002, "Camisa Simples", 79.99, "ele mesmo",
		"Adidas", "Masculino", "M", "Preta", "Poliéster"));
	((Loja*)listaContas.get(0))->addItem(new Eletronico(10003, "Placa de Vídeo", 1499.99, "tia iraci",
		"NVIDIA", "GTX 1660 6GB", "Galax", "Mto braba!"));
	listaContas.add(new Cliente(CLIENTE, "Saci Perere", "curupira", "Amazonas",
		"Manaus", "87090-550", "Bloco 3 Apartamento 504", "saciperere@gmail.com",
		"91111-1111", "150.670.320-11", 1.00, "Visa"));
}

ECommerce::~ECommerce(void) {
	return ;
}

void ECommerce::cabecalhoInicial(void) {
	cout << "_________________________" << endl;
	cout << "|                        |" << endl;
	cout << "| Bem vindo ao E-Comerce |" << endl;
	cout << "|________________________|" << endl;
	cout << "|                        |" << endl;
	cout << "| 1 - Login              |" << endl;
	cout << "| 2 - Cadastro           |" << endl;
	cout << "| 3 - Listar Contas      |" << endl;
	cout << "| 4 - Sair               |" << endl;
	cout << "|________________________|" << endl;
	cout << endl;
}

void ECommerce::menuInicial(void) {

	string	command;
	int		loop = true;

	cabecalhoInicial();
	while (loop)
	{
		cout << "# Escolha um Número: ";
		getline(cin, command);
		switch (atoi(command.c_str()))
		{
			case 1:
				menuLogin();
				cabecalhoInicial();
				break;
			case 2:
				menuCadastro();
				cabecalhoInicial();
				break;
			case 3:
				listaContas.exibeLista();
				cabecalhoInicial();
				break;
			case 4:
				loop = false;
				break;
			default:
				cout << "!! Comando não encontrado, tente novamente !!" << endl;
		}
	}
}

void	ECommerce::menuLogin(void)
{
	cout << "***Login****" << endl;
}

void	ECommerce::menuCadastro(void)
{
	cout << "****Cadastro****" << endl;
}