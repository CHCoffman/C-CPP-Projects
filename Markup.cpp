/* This program will ask the user to enter an items wholesale cost and its markup
percentage. It will then use a function that receives the wholesale cost and markup
as args and returns the retail price of the item.
Colten Coffman*/
#include <iomanip>
#include <iostream>
using namespace std;

// Function prototype
double calculateRetail(double, double);
double wholesaleCost, markUpPercentage;
int main()
{
	// Get the values for the wholesale cost and the mark up percentage
	cout << "Enter the wholesale cost and the markup percentage:\n";
	cin >> wholesaleCost >> markUpPercentage;
	markUpPercentage = markUpPercentage / 100;

	// Call the retailPrice function to display the retail price
	double retailPrice = calculateRetail(wholesaleCost, markUpPercentage);
	cout << "The retail price should be: " << retailPrice;

}

// Function to calculate the retail price based off of the 
// wholesale cost and the mark up percentage
double calculateRetail(double cost, double percentage)
{
	if (cost > 0 && percentage > 0)
	{
		double markup = cost + (cost * percentage);
		return markup;
	}
	else
	{
	cout << "invalid input, try again";
	exit(0);
	}
}
