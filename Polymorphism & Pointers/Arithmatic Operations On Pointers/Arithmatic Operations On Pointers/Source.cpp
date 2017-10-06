#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int num[] = { 56, 75, 22, 18, 90 };
	int *ptr;
	int i;
	cout << "The array values are : ";
	for (i = 0; i < 5; i++)
		cout << num[i] << endl;

	//Initializing the base address of str to ptr
	ptr = num;
	//Printing values in the array
	cout << endl << "Value of ptr :" << *ptr;
	cout << endl;

	ptr++;

	cout << "Value of ptr++ : " << *ptr;
	cout << endl;

	ptr--;

	cout << endl << "Value of ptr-- : " << *ptr;
	cout << endl;

	ptr = ptr + 2;

	cout << endl << "Value of ptr+2 : " << *ptr;
	cout << endl;

	ptr = ptr - 1;

	cout << endl << "Value of ptr-1 : " << *ptr;
	cout << endl;

	ptr += 3;

	cout << endl << "Value of ptr+=3 : " << *ptr;
	cout << endl;

	ptr -= 2;

	cout << endl << "Value of ptr-=2 : " << *ptr;
	cout << endl;

	system("pause");
}