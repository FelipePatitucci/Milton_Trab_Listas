#include "../include/NoItem.h"

template <typename T>
NoItem<T>::NoItem() {
	prox = nullptr;
}

template <typename T>
NoItem<T>::~NoItem() {
	delete prox;
}

