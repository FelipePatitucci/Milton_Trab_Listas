#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "Lista.hpp"
#include "Item.hpp"

enum StatusPedido
{
	ANALISE,
	CONFIRMADO,
	ENVIADO,
	RECEBIDO
};

class Pedido
{
	private:
		string			cliente;
		string			metodoPagamento;
		double			taxaEntrega;
		double			total;
		StatusPedido	statusPedido;
		Lista<Item>		itens;

	protected:

	public:

		Pedido(void);
		Pedido(string cliente);
		~Pedido(void);

		string			getMetodoPagamento(void);
		void			setMetodoPagamento(string metodoPagamento);
		StatusPedido	getStatusPedido(void);
		void			setStatusPedido(StatusPedido statusPedido);
		double			getTaxaEntrega(void);
		double			getTotal(void);

		void	adicionarItem(Item* item);
		void	excluirItem(string nome);
		void	mostrarItens(void);

		void	info(void);

};

#endif
