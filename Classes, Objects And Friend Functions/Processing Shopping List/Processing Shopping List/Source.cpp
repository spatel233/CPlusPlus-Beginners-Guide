#include "Header.h"

int main()
{
	ITEMS order;
	order.CNT();
	int x;

	do{
		cout << endl << " You can do the following :";
		cout << " Enter appropriate numbers :" << endl;
		cout << endl << "1 Add an item ";
		cout << endl << "2 Display total value";
		cout << endl << "3 Delete an item";
		cout << endl << "4 Display all items";
		cout << endl << "5 Quit";
		cout << endl << "What is your option? : ";

		cin >> x;

		switch (x)
		{
		case 1: order.getitem(); break;
		case 2: order.displaySum(); break;
		case 3: order.remove(); break;
		case 4: order.displayItem(); break;
		case 5: break;
		default: cout << "Error in input try again" << endl;
		}
	} while (x != 5);

	system("pause");
	return 0;
}