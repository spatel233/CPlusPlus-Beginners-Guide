#include <iostream>

using namespace std;

const int m = 50;
class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
public:
	void CNT(void){ count = 0; }
	void getitem(void);
	void displaySum(void);
	void remove(void);
	void displayItem(void);
};