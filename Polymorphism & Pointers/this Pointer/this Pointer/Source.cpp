#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class person
{
	char name[20];
	float age;
public:
	person(char * s, float a)
	{
		strcpy(name, s);
		age = a;
	}
	person greater(person & x)
	{
		if (x.age >= age)
		{
			return x;
		}
		else
			return *this;
	}
	void display(void)
	{
		cout << "Name: " << name << "\n";
		cout << "Age: " << age << "\n";
	}
};

int main()
{
	person P1("John", 37.50),
		P2("Ahmed", 29.0),
		P3("Hubber", 40.25);

	person P = P1.greater(P3);
	cout << "Elder person is: \n";
	P.display();

	P = P1.greater(P2);
	cout << "Elder person is: \n";
	P.display();

	system("pause");
	return 0;
}