#include <iostream>
#include "List.h"

using std::cin;
using std::cout;
using std::endl;

List::List(){
	m_nodePtrHead = NULL;
	m_nodePtrCurr = NULL;
	m_nodePtrTemp = NULL;
}

List::~List(){
	if (m_nodePtrHead != NULL){
		delete m_nodePtrHead;
		delete m_nodePtrCurr;
		delete m_nodePtrTemp;
	}
	m_nodePtrHead = NULL;
	m_nodePtrCurr = NULL;
	m_nodePtrTemp = NULL;
}

void List::AddNode(int _addData){
	NodePtr tempNode = new Node;
	tempNode->next = NULL;
	tempNode->data = _addData;

	m_nodePtrCurr = m_nodePtrHead;

	if (m_nodePtrHead != NULL){
		while (m_nodePtrCurr->next != NULL){
			m_nodePtrCurr = m_nodePtrCurr->next;
		}
		m_nodePtrCurr->next = tempNode;
	}
	else{
		m_nodePtrHead = tempNode;
	}
}

void List::DeleteNode(int _delData){
	NodePtr delData = new Node;
	m_nodePtrCurr = m_nodePtrHead;
	m_nodePtrTemp = m_nodePtrHead;

	while (m_nodePtrCurr != NULL && m_nodePtrCurr->data != _delData){
		m_nodePtrTemp = m_nodePtrCurr;
		m_nodePtrCurr = m_nodePtrCurr->next;
	}

	if (m_nodePtrCurr == NULL){
		cout << _delData << " Was not found in the list" << endl;
	} else{
		delData = m_nodePtrCurr;
		m_nodePtrCurr = m_nodePtrCurr->next;
		m_nodePtrTemp->next = m_nodePtrCurr;
		cout << _delData << " Has been removed from the list" << endl;
	}
}

void List::PrintList(){
	m_nodePtrCurr = m_nodePtrHead;
	while (m_nodePtrCurr != NULL){
		cout << m_nodePtrCurr->data << ", ";
		m_nodePtrCurr = m_nodePtrCurr->next;
	}
	cout << endl;
}