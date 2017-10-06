#include "Class.h"

const int size = 3;

int main()
{
	employee manager[size];
	for (int i = 0; i < size; i++)
	{
		cout << endl << "Details of manager" << i + 1 << endl;
		manager[i].getdata();
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << endl << "Manager" << i + 1 << endl;
		manager[i].putdata();
	}

	system("pause");
	return 0;
}