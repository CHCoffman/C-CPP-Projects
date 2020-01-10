// This program tracks the sales of 5 different types of salsa using two different arrays.
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;


int main()
{
	const int NUMBER = 5;
	string salsaName[NUMBER] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int salsaSales[NUMBER];
	int total = 0;
	int lowestIndex = 0, highestIndex = 0;
	
	for (int i = 0; i < NUMBER; i++)
	{
		cout << "Enter the sales for " << salsaName[i] << endl;
		cin >> salsaSales[i];
		if (salsaSales[i] < 0)
		{
			cout << "Sales cannot be negative.";
			cin >> salsaSales[i];
		}
	}
	cout << "------------------------------------\n";
	cout << "Sales Report\n";
	cout << "------------------------------------\n";
	for (int i = 0; i < NUMBER; i++)
	{
		cout << salsaName[i] << ":\t" << salsaSales[i] << endl;
		total += salsaSales[i];
	}
	int highest = salsaSales[0], lowest = salsaSales[0];
	for (int i = 0; i < NUMBER; i++)
	{
		if (highest < salsaSales[i])
		{
			highest = salsaSales[i];
			highestIndex = i;
		}

		if (lowest > salsaSales[i])
		{
			lowest = salsaSales[i];
			lowestIndex = i;
		}
	}
	cout << "Total sales: " << total << endl;
	cout << "The highest sales was: " << salsaName[highestIndex] 
		 << "\nThe lowest was: " << salsaName[lowestIndex] << endl;
	
	return 0;
}


