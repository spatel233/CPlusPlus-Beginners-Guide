#include "List.h"

List::List(){
	Head = nullptr;
	Tail = nullptr;
	Temp = nullptr;
}

List::~List(){
	if (Head != nullptr){
		delete Head;
		Head = nullptr;
	}
	if (Tail != nullptr){
		delete Tail;
		Tail = nullptr;
	}
	if (Temp != nullptr){
		delete Temp;
		Temp = nullptr;
	}
}

void List::AddNodeBack(int _data){
	NodePtr tempHolding = new Node;
	NodePtr Curr = new Node;
	tempHolding->data = _data;
	tempHolding->next = nullptr;
	Curr = Head;
	if (Tail != nullptr){
		Tail->next = tempHolding;
		tempHolding->prev = Tail;
		Tail = tempHolding;
		Tail->next = nullptr;
	}
	else{
		Head = tempHolding;
		Tail = tempHolding;
		tempHolding->prev = nullptr;
		tempHolding->next = nullptr;
	}
}

void List::DeleteNode(int _data){
	NodePtr tempHolding = new Node;
	NodePtr Curr = new Node;
	Curr = Head;
	Temp = Head;

	while (Curr != nullptr && Curr->data != _data){
		Temp = Curr;
		Curr = Curr->next;
	}
	if (Curr == nullptr){
		std::cout << "Not found" << std::endl;
	}
	else{
		tempHolding = Curr;
		Curr = Curr->next;
		Temp->next = Curr;
		delete tempHolding;
	}
}

void List::AddFront(int _data){
	NodePtr tempHolding = new Node;

	if (Head != nullptr){
		Head->prev = tempHolding;
		tempHolding->next = Head;
		tempHolding->data = _data;
		tempHolding->prev = nullptr;
		Head = tempHolding;
	}
	else{
		Head = tempHolding;
		Tail = tempHolding;
		tempHolding->next = nullptr;
		tempHolding->prev = nullptr;
	}
}

void List::PrintList(){
	NodePtr tempHolding = Head;
	std::cout << "Printing Forward" << std::endl;
	while (tempHolding != nullptr){
		std::cout << tempHolding->data << ", ";
		tempHolding = tempHolding->next;
	}
	std::cout << std::endl;
	std::cout << "Print Backward" << std::endl;
	tempHolding = Tail;
	while (tempHolding != nullptr){
		std::cout << tempHolding->data << ", ";
		tempHolding = tempHolding->prev;
	}
	std::cout << std::endl;
}