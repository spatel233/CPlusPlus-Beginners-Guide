#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main(){
	list<int>list1;
	deque<int>deque1;
	
	//Add to the back
	list1.push_back(5);
	list1.push_back(4);
	list1.push_back(3);

	//Add to the front
	list1.push_front(5);
	list1.push_front(4);
	list1.push_front(3);

	//Make an iterator
	list<int>::iterator list1Iter;
	list1Iter = list1.begin();


	cout << "LIST : " << endl;
	for (; list1Iter != list1.end(); list1Iter++){
		cout << *list1Iter << " ";
	}
	cout << endl;

	//Add to the back
	deque1.push_back(5);
	deque1.push_back(4);
	deque1.push_back(3);
	deque1.push_back(2);
	deque1.push_back(1);

	//Add to the front
	deque1.push_front(5);
	deque1.push_front(4);
	deque1.push_front(3);
	deque1.push_front(2);
	deque1.push_front(1);

	//Make Iterator
	deque<int>::iterator dequeIter;
	dequeIter = deque1.begin();

	cout << "Deque : " << endl;
	for (; dequeIter != deque1.end(); dequeIter++){
		cout << *dequeIter << " ";
	}
	cout << endl;

	system("pause");
}