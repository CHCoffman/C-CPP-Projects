// Colten Coffman
#include <iostream>
using namespace std;

int main()
{
	// MPG calculator based on miles traveled to E and gallons used
	double milesTraveled, gallonsOfGas;
	cout << "Enter the number of miles you went: ";
	cin >> milesTraveled;
	cout << "Enter the gallons of gasoline that you used: ";
	cin >> gallonsOfGas;

	double mpg = milesTraveled / gallonsOfGas;
	cout << "Your mpg is: " << mpg << endl;

	// Income from ticket sales calculations where
	// Ticket A = 15, B = 20, C = 25
	double ticketA, ticketB, ticketC, total;
	
	cout << "How many of each ticket was sold? Starting with ticketA: \n";
	cin >> ticketA;
	cin >> ticketB;
	cin >> ticketC;
	total = (ticketA * 15) + (ticketB * 20) + (ticketC * 25);
	cout << "Total income from the ticket sales is: $" << total << endl;

	// Averaging test scores
	int test1, test2, test3, test4, test5, average;
	cout << "Enter your score for test 1 ";
	cin >> test1;
	cout << "Enter your score for test 2 \n";
	cin >> test2;
	cout << "Enter your score for test 3 \n";
	cin >> test3;
	cout << "Enter your score for test 4 \n";
	cin >> test4;
	cout << "Enter your score for test 5 \n";
	cin >> test5;
	average = (test1 + test2 + test3 + test4 + test5) / 5;
	cout << "The test avergage was " << average;
	return 0;
}

