#include "Class.h"

void employee::getdata(void)
{
	cout << "Enter name: "; cin >> name;
	cout << "Enter age: "; cin >> age;
}

void employee::putdata(void)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}