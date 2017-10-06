#include <iostream>

using namespace std;

class ABC; //Has to be forward declared so that the complier knows of its presence for the friend function

class XYZ
{
	int x;
public:
	void setvalue(int i){ x = i; }
	friend void max(XYZ, ABC);
};

class ABC
{
	int a;
public:
	void setvalue(int i){ a = i; }
	friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
	if (m.x >= n.a)
		cout << m.x;
	else
		cout << n.a;
}