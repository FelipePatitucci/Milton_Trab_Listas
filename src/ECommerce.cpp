#include "ECommerce.hpp"

ECommerce::ECommerce(void) {
	Loja*		loja;
	Cliente*	cliente;

	listaContas.inserir(new Loja(LOJA, "Bramazon", "bolodebata1@", "Rio de Janeiro",
		"Rio de Janeiro", "20220-142", "Segundo Andar", "bramazon@gmail.com",
		"998765432", "64.725.872/0001-08"));

	loja = (Loja*)listaContas.buscar("Bramazon");
	loja->cadastrarItem(new Livro(LIVRO, 10001, "O Som da Montanha", 29.99, "Bramazon",
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972));
	loja->cadastrarItem(new Livro(LIVRO, 10002, "E Não Sobrou Nenhum", 19.99, "Bramazon",
		"Agatha Christie", 350, "Suspense", "Portugues", 1987));
	loja->cadastrarItem(new Roupa(ROUPA, 10002, "Camisa Simples", 79.99, "Bramazon",
		"Adidas", "Masculino", "M", "Preta", "Poliéster"));
	loja->cadastrarItem(new Eletronico(ELETRONICO, 10003, "Placa de Vídeo", 1499.99, "Bramazon",
		"NVIDIA", "GTX 1660 6GB", "Galax", "Mto braba!"));

	listaContas.inserir(new Cliente(CLIENTE, "Saci Perere", "curupira", "Amazonas",
		"Manaus", "87090-550", "Bloco 3 Apartamento 504", "saciperere@gmail.com",
		"91111-1111", "150.670.320-11", 1.00, "Visa"));

	cliente = ((Cliente*)listaContas.buscar("Saci Perere"));
	cliente->comprarItem(new Livro(LIVRO, 10001, "O Som da Montanha", 29.99, "Bramazon",
		"Yasunari Kawabata", 337, "Drama", "Portugues", 1972));
	cliente->comprarItem(new Eletronico(ELETRONICO, 10003, "Placa de Vídeo", 1499.99, "Bramazon",
		"NVIDIA", "GTX 1660 6GB", "Galax", "Mto braba!"));
}

ECommerce::~ECommerce(void) {
	return ;
}

void ECommerce::cabecalhoInicial(void) {
	cout << endl;
	cout << "+-------------------------+" << endl;
	cout << "| Bem Vindo ao E-Commerce |" << endl;
	cout << "+-------------------------+" << endl;
	cout << "| 1 - Login               |" << endl;
	cout << "| 2 - Listar Contas       |" << endl;
	cout << "| 3 - Sair                |" << endl;
	cout << "+-------------------------+" << endl;
}

void ECommerce::menuInicial(void) {

	string	command;
	int		loop = true;

	cabecalhoInicial();
	while (loop)
	{
		cout << "\n# Escolha um Número: ";
		getline(cin, command);
		switch (atoi(command.c_str()))
		{
			case 1:
				menuLogin();
				cabecalhoInicial();
				break;
			case 2:
				listaContas.exibeLista();
				cabecalhoInicial();
				break;
			case 3:
				loop = false;
				break;
			default:
				cout << "\n!! Comando não encontrado, tente novamente !!" << endl;
		}
	}
}

void	ECommerce::menuLogin(void) {
	Conta*	conta;

	conta = buscarConta();
	if (conta)
		if (acessarConta(conta))
			conta->infos();
}

Conta*	ECommerce::buscarConta(void) {
	string	command;
	string	nome;
	Conta*	conta = nullptr;
	int		loop = true;

	while (true)
	{
		cout << "\n# Digite o nome da conta: ";
		getline(cin, nome);
		conta = listaContas.buscar(nome);
		if (conta)
			break ;
		cout << "\n!! conta não encontrada !!\n" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 1 - Tentar Novamente    |" << endl;
		cout << "| 2 - Voltar E-Commerce   |" << endl;
		cout << "+-------------------------+" << endl;
		loop = true;
		while (loop)
		{
			cout << "\n# Escolha um Número: ";
			getline(cin, command);
			switch (atoi(command.c_str()))
			{
				case 1:
					loop = false;
					break;
				case 2:
					return nullptr;
					break;
				default:
					cout << "\n!! Comando não encontrado, tente novamente !!" << endl;
			}
		}
	}

	return conta;
}

bool	ECommerce::acessarConta(Conta* conta) {
	string	command;
	string	senha;
	int		loop = true;

	while (true)
	{

		cout << "\n# Digite a senha da conta: ";
		getline(cin, senha);
		if (conta->verificarSenha(senha))
			break;
		cout << "\n!! senha incorreta !!\n" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 1 - Tentar Novamente    |" << endl;
		cout << "| 2 - Voltar E-Commerce   |" << endl;
		cout << "+-------------------------+" << endl;
		loop = true;
		while (loop)
		{
			cout << "\n# Escolha um Número: ";
			getline(cin, command);
			switch (atoi(command.c_str()))
			{
				case 1:
					loop = false;
					break;
				case 2:
					return false;
					break;
				default:
					cout << "\n!! Comando não encontrado, tente novamente !!" << endl;
			}
		}
	}

	return true;
}
