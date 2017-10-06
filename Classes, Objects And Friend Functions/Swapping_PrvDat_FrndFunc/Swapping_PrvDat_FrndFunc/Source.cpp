#include <iostream>

using namespace std;

class class_2;

class class_1
{
	int value1;
public:
	void indata(int a)
	{
		value1 = a;
	}
	void display()
	{
		cout << value1 << endl;
	}
	friend void exchange(class_1 &, class_2 &);
};
class class_2
{
	int value2;
public:
	void indata(int a)
	{
		value2 = a;
	}
	void display(void)
	{
		cout << value2 << endl;
	}
	friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 & x, class_2 & y)
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

int main()
{
	class_1 C1;
	class_2 C2;

	C1.indata(200);
	C2.indata(100);

	cout << "Values before exchange" << endl;
	C1.display();
	C2.display();

	exchange(C1, C2);

	cout << "Values after exchange" << endl;
	C1.display();
	C2.display();

	system("pause");
	return 0;
}