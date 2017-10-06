#include "Class.h"

void time::sum(time t1, time t2)
{
	//Minutes and hours without an object call like t1.hours and t2.hours etc...
	// is the current object
	minutes = t1.minutes + t2.minutes;
	hours = minutes / 60;
	minutes = minutes % 60;
	hours = hours + t1.hours + t2.hours;
}