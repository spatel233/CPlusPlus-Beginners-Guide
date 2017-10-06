#include <iostream>

using namespace std;

class time
{
	int hours;
	int minutes;
public:
	void gettime(int h, int m)
	{
		hours = h; minutes = m;
	}
	void puttime(void)
	{
		cout << hours << "hours and ";
		cout << minutes << " minutes " << endl;
	}
	void sum(time, time);
};