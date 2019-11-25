// This program determines which of a company's four divisions (NE, SE, NW, and SW)
// had the greatest sales for a quarter, using two different functions.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	// Get the sales for all of the divisions
	double Northeast = getSales("Northeast");
	double Southeast = getSales("Southeast");
	double Northwest = getSales("Northwest");
	double Southwest = getSales("Southwest");

	// Find the division with the highest sales
	findHighest(Northeast, Southeast, Northwest, Southwest);
	return 0;
}

// Function to get the sales of each division
double getSales(string division)
{
	double sales;
	cout << "Enter the sales for " << division << " division" << endl;
	cin >> sales;
	while (sales < 0)
	{
	cout << "sales must be positive.";
	cin >> sales;
	}
	return sales;	

}

// Function to find the division with the highest sales
void findHighest(double NE, double SE, double NW, double SW)
{
	if (NE > SE && NE > NW && NE > SW)
	{
		cout << "The Northeast division had the highest sales!";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		cout << "The Southeast division had the highest sales!";
	}
	else if (NW > NE && NW > SE && NW > SW)
	{
		cout << "The Northwest division had the highest sales!";
	}
	else if (SW > NE && SW > NW && SW > SE)
	{
		cout << "The Southwest division had the highest sales!";
	}
}
