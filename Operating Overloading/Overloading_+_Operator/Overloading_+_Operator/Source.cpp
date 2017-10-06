#include <iostream>

using namespace std;

class complex
{
	float x;
	float y;
public:
	complex(){}
	complex(float real, float imag)
	{
		x = real;
		y = imag;
	}
	complex operator+(complex); //***Can also be used using a friend function
								// friend complex operator+(complex, complex);
	void display(void);
};

complex complex::operator+(complex c) //***Can also be written using a friend function
{									  // friend operator+(complex a, complex b)
	complex temp;					  // { return complex((a.x + b.x), (a.y + b.y)); }
	temp.x = x + c.x;
	temp.y = y + c.y;
	return (temp);
}

void complex::display(void)
{
	cout << x << " + j" << y << "\n";
}

int main()
{
	complex C1, C2, C3;
	C1 = complex(2.5, 3.5);
	C2 = complex(1.6, 2.7);
	C3 = C1 + C2; //Equivelent to C3 = C1.operator+(C2);
	cout << "C1 = "; C1.display();
	cout << "C2 = "; C2.display();
	cout << "C3 = "; C3.display();
	int i;
	cin >> i;
	return 0;
}