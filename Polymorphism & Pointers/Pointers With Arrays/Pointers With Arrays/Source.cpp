#include <iostream>

using namespace std;

void main()
{
	int number[50], *ptr;
	int n, i;
	cout << "Enter the count : ";
	cin >> n;

	cout << endl << "Enter the numbers one by one " << endl;
	for (i = 0; i < n; i++)
		cin >> number[i];

	/*Assigning the base address of numbers to ptr and intializing 
	the sum to 0*/

	int sum = 0;
	ptr = number;
	for(i = 0; i < n; i++)
	{
		if (*ptr % 2 == 0)
			sum = sum + (*ptr);
		ptr++;
	}

	cout << "\n\nSum of even numbers : " << sum;

	system("pause");
}