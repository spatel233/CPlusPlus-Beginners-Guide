#include <iostream>

using namespace std;

class BC
{
public:
	int b;
	void show()
	{
		cout << "b = " << b << "\n";
	}
};

class DC : public BC
{
public:
	int d;
	void show()
	{
		cout << "b = " << b << "\n";
		cout << "d = " << d << "\n";
	}
};

int main()
{
	BC *bptr;
	BC base;
	bptr = &base;

	bptr->b = 100;
	cout << "bptr points to base object \n";
	bptr->show();
	//derived class
	DC derived;
	bptr = &derived;
	bptr->b = 200;

	/*bptr->d = 300;*/  //wont work

	cout << "bptr now points to derived object \n";
	bptr->show();

	/*accessing d using a pointer type derived from DC*/

	DC *dptr;
	dptr = &derived;
	dptr->d = 300;

	cout << "dptr is derived type pointer\n";
	dptr->show();

	cout << "using ((DC *)bptr)\n";
	((DC *)bptr)->d = 300;
	((DC *)bptr)->show();

	system("pause");
	return 0;
}