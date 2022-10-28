#include "../include/NoItem.h"

NoItem::NoItem() {
	prox = nullptr;
}

NoItem::~NoItem() {
	delete prox;
}

void NoItem::colocaItem(Item d) {
	item = d;
	prox = nullptr;
}
