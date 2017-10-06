/*Allocate an array with code>new
When the desired size of an array is known, allocate memory for it with the new operator and 
save the address of that memory in the pointer. Remember: Pointers may be subscripted just as 
arrays are. The example below reads in a number and allocates that size array.*/
#include <iostream>
int main()
{
	int* a = NULL; //Pointer to int, initialize to nothing
	int n;		   //Size needed for array
	std::cin >> n; //Read the size
	a = new int[n];//Allocate n ints and save ptr in a
	for (int i = 0; i < n; i++)
		a[i] = 0;  //Initialize all element to zero
	//...Use as normal array in this area
	delete[] a; //When done, free memory pointed to by a
	a = NULL;   //Clear a to prevent using invalid memory reference
	return 0;
}