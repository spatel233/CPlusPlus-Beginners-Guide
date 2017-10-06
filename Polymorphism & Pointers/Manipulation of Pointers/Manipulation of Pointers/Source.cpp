#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int a = 10, *ptr;
	ptr = &a;

	cout << "The value of a is : " << a;

	cout << endl << endl;

	*ptr = (*ptr) / 2;

	cout << "The value of a is : " << (*ptr);
	cout << endl << endl;

	system("pause");
}