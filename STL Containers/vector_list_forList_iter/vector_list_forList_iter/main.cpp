#include<iostream>
#include<vector>
#include<list>
#include<forward_list>

using namespace std;

int main(){

	list<int>list1{ 0, 1, 2, 3, 4, 5, 6 };
	list<int>::iterator itrList;
	itrList = list1.begin();

	for (; itrList != list1.end(); itrList++){
		cout << *itrList << " ";
	}
	cout << endl;

	//CANNOT DO WITH LIST
	//itrList += 4;

	forward_list<int>list2{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	forward_list<int>::iterator itrList2;
	itrList2 = list2.begin();

	for (; itrList2 != list2.end(); itrList2++){
		cout << *itrList2 << " ";
	}
	cout << endl;

	//CANNOT DO WITH FORWARD_LIST
	//itrList2--;
	//itrList2 += 4;

	vector<int>vec{ 0, 1, 2, 3, 4, 5 };
	vector<int>::iterator vecIt;
	vecIt = vec.begin();

	for (; vecIt != vec.end(); vecIt++){
		cout << *vecIt << " ";
	}
	cout << endl;
	vecIt--;
	cout << *vecIt << endl;
	vecIt -= 4;
	cout << *vecIt << endl;

	system("pause");
	return 0;
}