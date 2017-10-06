#include <iostream>

class List{
	typedef struct Node{
		int data;
		Node* next;
		Node* prev;
	}*NodePtr;
	NodePtr Head;
	NodePtr Tail;
	NodePtr Temp;
public:
	List();
	~List();
	void AddNodeBack(int);
	void DeleteNode(int);
	void AddFront(int);
	void PrintList();
};