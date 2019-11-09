/* A country club charges $2,000 per year for membership. 
 They will increase dues 4% each year for the next 6 years
 This program will display those projections on price
 By Colten Coffman
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float membershipDues = 2500, membershipIncrease = .04;

	cout << "The country club will be increasing it's current dues"
		<< " by 4% each year for the next 6 years" << endl;
	cout << "Below the cost projection can be seen." << endl;
	
	cout << "The current dues are $" << membershipDues << endl;

	// Loop to increase the dues with each year.
	for (int year = 1; year <= 6; year++)
	{
		// Add the increase to the dues each year
		membershipDues += membershipDues * membershipIncrease;

		// Display the projections for 6 years out, with 2 decimal places.
		cout << "After year " << year << ", dues will be: $"
			<< setprecision(2) << fixed << membershipDues << endl;
	}
	return 0;
}


