#include "Class.h"

int main()
{
	ABC abc;
	abc.setvalue(10);
	XYZ xyz;
	xyz.setvalue(20);
	max(xyz, abc);

	system("pause");
	return 0;
}