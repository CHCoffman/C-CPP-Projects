// This program displays a table showin the number of millimeters that the ocean will have risen each year for the
// next 25 years, assuming the ocean's level rises 1.5 mm per year.

#include <iostream>
using namespace std; 

int main()
{
	double oceanRise = 0;
	int years;

	cout << "The ocean will rise 1.5mm each year. " << endl;
	cout << "Below is a table that displays the rise in"
		<< " the ocean level each year for 25 years.\n" << endl;

	for (int years = 1; years <= 25; years++)
	{
		oceanRise += 1.5;

		cout << "*******************************" << endl;
		cout << "Ocean Level rise\tYear\n" << endl;
		cout << oceanRise << "mm" << "\t\t\t" << years << "\n" << endl;
	}
	return 0;
}

