// Program that will loop and lets the user enter a series of integers.
// The user should enter -99 to signal the end of the series. After all
// numbers have been entered, the program should display the largest and 
// smallest numbers entered.
// Colten Coffman

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter as many integers as you would like"
		<< " and I will find the greatest and least.\n";
	int i = 0, greatest = 0, smallest = INT_MAX;

	while(i != -99)
	{
		cout << "Enter here: ";
		cin >> i;
		if (greatest < i) 
		{
			greatest = i;
		}
		if (smallest > i && i != -99)
		{
			smallest = i;
		}
	}
	cout << "The highest value was: " << greatest << endl;
	cout << "The smallest value was: " << smallest;

	return 0;
}
