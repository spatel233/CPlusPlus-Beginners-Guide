#include <iostream>
#include <iomanip>		//for setw

using namespace std;

int main()
{
	int Basic = 950, Allowance = 95, Total = 1045;

	cout << setw(10) << "Basic" << setw(10) << Basic << endl
		<< setw(10) << "Allowance" << setw(10) << Allowance << endl
		<< setw(10) << "Total" << setw(10) << Total << endl;
	system("pause");
	return 0;
}