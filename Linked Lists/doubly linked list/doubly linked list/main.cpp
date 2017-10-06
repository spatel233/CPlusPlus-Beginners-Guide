#include <iostream>
#include "List.h"

using namespace std;

int main(){
	List mainList;

	int intListNum = 0;
	bool boolListContinue = true;
	char answer;

	while (boolListContinue){
		cout << "Enter a number you want to add " << endl;
		cin >> intListNum;
		mainList.AddNodeBack(intListNum);
		cout << "Enter a number you want to add " << endl;
		cin >> intListNum;
		mainList.AddFront(intListNum);
		cout << "Continue?" << endl;
		cin >> answer;
		if (answer == 'N'){
			boolListContinue = false;
		}
	}
	answer = 'Y';
	boolListContinue = true;
	cout << "Do you want to delete a number from the list " << endl;
	cin >> answer;
	if (answer == 'Y'){
		while (boolListContinue){
			cout << "Enter a number you want to delete " << endl;
			cin >> intListNum;
			mainList.DeleteNode(intListNum);
			cout << "Continue?" << endl;
			cin >> answer;
			if (answer == 'N'){
				boolListContinue = false;
			}
		}
	}
	mainList.PrintList();
	return 0;
}