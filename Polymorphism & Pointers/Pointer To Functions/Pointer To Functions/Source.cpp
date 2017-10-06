#include <iostream>
using namespace std;

typedef void(*FunPtr)(int, int);

void Add(int i, int j)
{
	cout << i << " + " << j << " = " << i + j;
}

void Subtract(int i, int j)
{
	cout << i << " - " << j << " = " << i - j;
}

void main()
{
	FunPtr ptr;
	ptr = &Add;
	ptr(1, 2);
	cout << endl;
	ptr = &Subtract;
	ptr(3, 2);
	cout << endl;

	system("pause");
}