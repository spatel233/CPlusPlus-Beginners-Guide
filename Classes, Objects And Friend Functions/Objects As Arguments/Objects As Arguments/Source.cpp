#include "Class.h"

int main()
{
	time t1, t2, t3;

	t1.gettime(2, 45);
	t2.gettime(3, 30);

	t3.sum(t1, t2);

	cout << "T1 = "; t1.puttime();
	cout << "T2 = "; t2.puttime();
	cout << "T3 = "; t3.puttime();

	system("pause");
	return 0;
}