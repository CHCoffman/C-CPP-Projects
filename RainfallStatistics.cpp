
// This program lets the user enter the total rainfall for each of 12 months into an array of doubles.
// It will then calculate and siplay the total rainfall for the year, the average monthly rainfall,  
// and the months with the highest and lowest amounts.

#include <iostream>
#include <iomanip>
using namespace std;

const int MONTHS = 12;
double rainfallAmounts[MONTHS];
double average, total;

int main()
{
	for (int i = 0; i < MONTHS; i++)
	{
		cout << "Enter the rainfall amount for month " << (i + 1) << endl;
		cin >> rainfallAmounts[i];
		if (rainfallAmounts[i] < 0)
		{
			cout << "invalid number, try again:\n";
			cin >> rainfallAmounts[i];
		}
	}
	
	double highest = rainfallAmounts[0], lowest = rainfallAmounts[0];	// Variables to hold the highest and lowest rainfall
	for (int i = 0; i < MONTHS; i++) 
	{		
		//tIf statements to determine the highest and lowest amounts of rainfall
		if (rainfallAmounts[i] < lowest)
			lowest = rainfallAmounts[i];
		if (rainfallAmounts[i] > highest)
			highest = rainfallAmounts[i];
	}
		// Loop to add each month's rainfall amount to the total
	for (int i = 0; i < MONTHS; i++)
	{
		total += rainfallAmounts[i];
	}
	average = total / MONTHS;
	cout << fixed << showpoint << setprecision(2);
	cout << "The total rainfall over " << MONTHS << " months is: " << total << endl;
	cout << "The average rainfall over that period is: " << average << endl;
	cout << "The highest month's rainfall was: " << highest << endl;
	cout << "The lowest month's rainfall was: " << lowest << endl;

	return 0;
}


