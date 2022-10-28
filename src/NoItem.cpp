#include "../include/NoItem.h"

template <typename T>
NoItem<T>::NoItem() {
	prox = nullptr;
}

template <typename T>
NoItem<T>::~NoItem() {
	delete prox;
}

template <typename T>
void NoItem<T>::colocaItem(T d) {
	item = d;
	prox = nullptr;
}
