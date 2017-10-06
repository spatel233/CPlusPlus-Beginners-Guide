#include "Header.h"

void ITEMS::getitem(void)
{
	cout << "Enter item code :";
	cin >> itemCode[count];
	cout << "Enter item cost : ";
	cin >> itemPrice[count];
	count++;
}

void ITEMS::displaySum(void)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += itemPrice[i];
	}
	cout << endl;
	cout << "Total value :" << sum << endl;
}

void ITEMS::remove(void)
{
	int a;
	cout << "Enter item code :";
	cin >> a;

	for (int i = 0; i < count; i++)
	if (itemCode[i] == a)
		itemCode[i] = 0;
}

void ITEMS::displayItem(void)
{
	cout << endl;
	cout << "Code Price" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << endl << itemCode[i];
		cout << "  " << itemPrice[i];
	}
	cout << endl;
}