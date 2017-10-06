#include <iostream>

using namespace std;

class Base
{
public:
	void display(){ cout << "\n Display base "; }
	virtual void show(){ cout << "\n Show base"; }
};

class Derived : public Base
{
	void display(){ "\n Display derived"; }
	void show(){ cout << "\n show derived"; }
};

int main()
{
	Base B;
	Derived D;
	Base *bptr;

	cout << "\n bptr points to Base \n";
	bptr = &B;
	bptr->display();	//calls Base version
	bptr->show();		//calls Base version

	cout << "\n bptr points to Derived\n";
	bptr = &D;
	bptr->display();	//calls Base Version
	bptr->show();		//calls Derived Version

	system("pause");
	return 0;
}