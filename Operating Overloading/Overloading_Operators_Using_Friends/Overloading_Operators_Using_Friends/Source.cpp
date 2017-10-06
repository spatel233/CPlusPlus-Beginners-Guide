#include <iostream>

using namespace std;

const int size = 3;

class vector
{
	int v[size];
public:
	vector();		//Constructs null vector
	vector(int *x); //Constructs vector from array
	friend vector operator *(int a, vector b);	//friend 1
	friend vector operator *(vector b, int a);	//friend 2
	friend istream & operator >> (istream &, vector &);	//overloaded istream
	friend ostream & operator << (ostream &, vector &);	//overloaded ostream
};

vector::vector()
{
	for (int i = 0; i < size; i++)
		v[i] = 0;
}

vector::vector(int *x)
{
	for (int i = 0; i < size; i++)
		v[i] = x[i];
}

vector operator *(int a, vector b)
{
	vector c;
	for (int i = 0; i < size; i++)
		c.v[i] = a * b.v[i];
	return c;
}

vector operator *(vector b, int a)
{
	vector c;
	for (int i = 0; i < size; i++)
		c.v[i] = a * b.v[i];
	return c;
}

istream & operator >> (istream &din, vector &b)
{
	for (int i = 0; i < size; i++)
		din >> b.v[i];
	return (din);
}

ostream & operator << (ostream &dout, vector &b)
{
	dout << "(" << b.v[0];
	for (int i = 0; i < size; i++)
		dout << ", " << b.v[i];
	dout << ")";
	return(dout);
}

int x[size] = { 2, 4, 6 };

int main()
{
	vector m;
	vector n = x;	//Invokes constructor with parameter
	cout << "Enter elements of vector m " << "\n";
	cin >> m;	//istream overloaded operator called
	cout << "\n";
	cout << "m =" << m << "\n"; //ostream overloaded operator called

	vector p, q;
	p = 2 * m;	//Invokes operator with int first in parameter
	q = n * 2;	//Invokes operator with int second in parameter

	cout << "\n";
	cout << "p = " << p << "\n"; //ostream overloaded operator called
	cout << "q = " << q << "\n"; //ostream overloaded operator called

	return 0;
}