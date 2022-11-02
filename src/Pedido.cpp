#include "Pedido.hpp"

Pedido::Pedido() {
	cliente = "";
	metodoPagamento = "Dinheiro";
	taxaEntrega = 0.0;
	total = 0.0;
	statusPedido = StatusPedido();
	itens = Lista<Item>();
}

Pedido::Pedido(string cliente): Pedido() {
	this->cliente = cliente;
}

Pedido::~Pedido() {
	return ;
}

string	Pedido::getMetodoPagamento(void) {
	return metodoPagamento;
}

void	Pedido::setMetodoPagamento(string metodoPagamento) {
	this->metodoPagamento = metodoPagamento;
}

StatusPedido	Pedido::getStatusPedido(void) {
	return statusPedido;
}

void	Pedido::setStatusPedido(StatusPedido statusPedido) {
	this->statusPedido = statusPedido;
}

double	Pedido::getTaxaEntrega(void) {
	return taxaEntrega;
}

void	Pedido::adicionarItem(Item* item) {
	itens.inserir(item);
	total += item->getPreco();
	taxaEntrega += item->getPreco() * 0.05;
}

void	Pedido::excluirItem(string nome) {
	Item*	item;

	item = itens.buscar(nome);
	if (item)
	{
		total -= item->getPreco();
		taxaEntrega -= item->getPreco() * 0.05;
		itens.deletar(nome);
	}
}

void	Pedido::mostrarItens(void) {
	itens.exibeLista();
}

void	Pedido::info(void) {
	cout << "|   Dono do Pedido: " << cliente << endl;
	cout << "|   Metodo de Pagamento: " << metodoPagamento << endl;
	cout << "|   Taxa de Entrega: R$ " << taxaEntrega << endl;
	cout << "|   Total do Pedido: R$ " << total << endl;
	cout << "|   Status do Pedido: ";
	switch (statusPedido)
	{
		case ANALISE:
			cout << "Análise";
			break;
		case CONFIRMADO:
			cout << "Confirmado";
			break;
		case ENVIADO:
			cout << "Enviado";
			break;
		case RECEBIDO:
			cout << "Recebido";
			break;
		default:
			cout << "Indefinido";
	}
	cout << endl;
	cout << "|   Itens do Pedido: " << endl;
	mostrarItens();
}