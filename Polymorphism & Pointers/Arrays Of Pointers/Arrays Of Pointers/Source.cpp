#include <iostream>
#include <conio.h>
#include <string>
#include <ctype.h>
//DOESNT WORKS
using namespace std;

void main()
{
	int i = 0;
	
	char *ptr[10] = {
		"books",
		"television",
		"computer",
		"sports"
	};

	char str[25];

	cout << endl << endl << "Enter your favourite leisure pursuit: ";
	cin >> str;

	for (i = 0; i < 4; i++)
	{
		if (str == (*ptr[i]))
		{
			cout << "\n\nYour Favourite pursuit is avaliable here\n";
			break;
		}
		if (i == 4)
		{
			cout << "Your favourite is not available here\n";
		}
	}
	system("pause");
}