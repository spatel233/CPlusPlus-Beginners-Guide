#include <iostream>

using namespace std;

class Item
{
	int code;
	float price;
public:
	void getdata(int a, float b)
	{
		code = a;
		price = b;
	}
	void show(void)
	{
		cout << "Code : " << code << "\n";
		cout << "Price : " << price << "\n";
	}
};

const int size = 2;

int main()
{
	Item *p = new Item[size];
	Item *d = p;
	int x, i;
	float y;

	for (int i = 0; i < size; i++)
	{
		cout << "Item code and price for item " << i + 1;
		cin >> x >> y;
		p->getdata(x, y);
		p++;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Item: " << i + 1 << "\n";
		d->show();
		d++;
	}

	system("pause");
	return 0;
}