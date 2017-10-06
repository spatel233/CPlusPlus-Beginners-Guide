#include <iostream>

using namespace std;

class code
{
	int id;
public:
	code(){}
	code(int a)
	{
		id = a;
	}
	code(code &x)
	{
		id = x.id;
	}
	void display()
	{
		cout << id << endl;
	}
};

int main()
{
	code A(100);
	code B(A);//copy constructor called
	code C = A; //Copy constructor called again

	code D;
	D = A; //Copy constructor is called

	cout << "Id of A: "; A.display();
	cout << "Id of B: "; B.display();
	cout << "Id of C: "; C.display();
	cout << "Id of D: "; D.display();

	system("pause");
	return 0;
}