#ifndef NO_HPP
#define NO_HPP

template <typename T>
class No
{
	private:
		No	*prev;
		T	*item;
		No	*prox;

	protected:

	public:
		No(void): prev(nullptr), item(), prox(nullptr) {};
		No(T *item): prev(nullptr), item(item), prox(nullptr) {};
		~No(void) { delete item; };

	template <typename L>
	friend class Lista;

};

#endif
