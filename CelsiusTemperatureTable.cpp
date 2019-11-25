// This program uses a function to covert celsius to Fahrenheit and
// F to C and displays conversions from 0 to 20

#include <iomanip>
#include <iostream>
using namespace std;

// Function prototype
double celsius(double);
int main()
{
	for (int i = 0; i <= 20; i++)
	{
		celsius(i);
	}
	return 0;
}

double celsius(double F)
{
	double celsiusConversion =  (F-32) / 9 * 5;
	cout << F << " degrees F is: " << setprecision(2) << celsiusConversion 
		 << " celsius" << endl;
	return celsiusConversion;
}