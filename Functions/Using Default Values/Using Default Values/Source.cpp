#include <iostream>

using namespace std;

int main()
{
	float amount;

	void printline(char ch = '*', int len = 40); //Prototype
	float value(float p, int n, float r = 0.15); //Prototype
	/*default values can only be on the tail of the function
	for example this function cannot be "float value(float p = 9, int n, float r = 0.15)"
	or it cannot be "float value(float p, int n = 5, float r)"*/

	printline(); //uses default values


	amount = value(5000.00, 5);
	cout << endl << "        final value = " << amount << endl << endl;
	printline('=');

	system("pause");
	return 0;
}

/*------------------------------------------------------------------------------*/

float value(float p, int n, float r)
{
	int year = 1;
	float sum = p;

	while (year <= n)
	{
		sum = sum *(1 + r);
		year = year + 1;
	}
	return(sum);
}

void printline(char ch, int len)
{
	for (int i = 1; i <= len; i++)
		cout << ch;
	cout << endl;
}