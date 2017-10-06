#include <iostream>

using namespace std;

//Declaration of Prototypes
int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
	cout << volume(10) << endl;
	cout << volume(2.5, 8) << endl;
	cout << volume(100L, 75, 15) << endl;

	system("pause");
	return 0;
}

//Function Declaration
int volume(int s) //Volume of a cube
{
	return(s*s);
}

double volume(double r, int h) //Volume of a cylinder
{
	return(3.14159*r*r*h);
}

long volume(long l, int b, int h) // Volume of a rectangular box
{
	return(l*h*h);
}