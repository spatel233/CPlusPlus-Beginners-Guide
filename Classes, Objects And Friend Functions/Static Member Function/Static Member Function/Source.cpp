#include <iostream>

using namespace std;

class test
{
	int code;
	static int count;	//static member variable
public:
	void setcode(void)
	{
		code = ++count;
	}
	void showcode(void)
	{
		cout << "Object number: " << code << endl;
	}
	static void showcount(void)	//static member function
	{//CAN ONLY ACCESS STATIC VARIABLES
		cout << "count: " << count << endl;
	}
};

int test::count; //automatically initializes count to 0
int main()
{
	test t1, t2;

	t1.setcode();
	t2.setcode();

	test::showcount(); //accessing static function

	test t3;
	t3.setcode();

	test::showcount();

	t1.showcode();
	t2.showcode();
	t3.showcode();

	system("pause");
	return 0;
}