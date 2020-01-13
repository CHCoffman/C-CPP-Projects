// This program will use a structure to store sales figures for 
// four divisions of a company
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Company
{
	string divisionName;
	double firstQSales;
	double secondQSales;
	double thirdQSales;
	double fourthQSales;
	double total;
	double average;
};
void getSales(Company&);
void showSales(Company);

int main()
{

	Company divOne;
	Company divTwo;
	Company divThree;
	Company divFour;

	getSales(divOne);
	getSales(divTwo);
	getSales(divThree);
	getSales(divFour);

	showSales(divOne);
	showSales(divTwo);
	showSales(divThree);
	showSales(divFour);

return 0;
}

// Function to get the sales numbers

void getSales(Company &s)
{

	// Get the division name
	cout << "Enter the division name: " << endl;
	cin >> s.divisionName;

	// Get the first quarter sales
	cout << "Enter the sales figures for the first quarter: " << endl;
	cin >> s.firstQSales;

	// Get the second quarter sales
	cout << "Enter the sales figures for the second quarter: " << endl;
	cin >> s.secondQSales;

	// Get the third quarter sales
	cout << "Enter the sales figures for the third quarter: " << endl;
	cin >> s.thirdQSales;

	// Get the fourth quarter sales
	cout << "Enter the sales figures for the fourth quarter: " << endl;
	cin >> s.fourthQSales;
}

// Function to display the data

void showSales(Company s)
{
	cout << "Sales Numbers for The Four Divisions" << endl;
	cout << " -------------------------------------------- " << endl;

	cout << "Division : " << s.divisionName << endl;
	cout << "1st Quarter Sales: " << s.firstQSales << endl;
	cout << "2nd Quarter Sales: " << s.secondQSales << endl;
	cout << "3rd Quarter Sales: " << s.thirdQSales << endl;
	cout << "4th Quarter Sales: " << s.fourthQSales << endl;
	s.total = (s.firstQSales + s.secondQSales + s.thirdQSales + s.fourthQSales);
	s.average = (s.total / 4);
}
