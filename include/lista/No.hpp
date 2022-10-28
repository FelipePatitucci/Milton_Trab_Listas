#ifndef NO_HPP
#define NO_HPP

template <typename T>
class No
{
	private:
		T	*item;
		No	*prox;

	protected:

	public:
		No(void): item(), prox(nullptr) {};
		No(T *item): item(item), prox(nullptr) {};
		~No() { delete item; };

	template <typename L>
	friend class Lista;

};

#endif
