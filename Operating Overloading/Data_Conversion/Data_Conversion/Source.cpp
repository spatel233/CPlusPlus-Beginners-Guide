#include <iostream>

using namespace std;

class invent2;	//Forward declaration

class invent1	//Source class
{
	int code;		//item code
	int items;	    //no. of items
	float price;	// cost of each item
public:
	invent1(int a, int b, float c)
	{
		code = a;
		items = b;
		price = c;
	}
	void putdata()
	{

	}
};