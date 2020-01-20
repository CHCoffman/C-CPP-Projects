// Driver for Date class
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
	// Create default object
	Date obj1;

	// Create and initialize date obj
	// with chosen values
	Date obj2(5, 25, 2014);

	// Display objects in different formats
	obj1.date1();
	obj1.date2();
	obj1.date3();

	obj2.date1();
	obj2.date2();
	obj2.date3();
return 0;
}
