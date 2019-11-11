// Program that uses a loop to display 0-20 Celsius and converts the temps to Fahrenheit
// Colten Coffman

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	

	for (int celsius = 0; celsius < 21; celsius++)
	{
		int fahrenheit = ((celsius * 9) /5) + 32;
		cout << "Celsius \t\t Fahrenheit\n" << endl;
		cout << "----------------------------------\n";
		cout << celsius << "\t\t\t" << fahrenheit << endl << endl;
	}
	return 0;
}
