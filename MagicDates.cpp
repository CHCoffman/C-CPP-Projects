#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int month, day, year;

	// Get the month, day, and year
	cout << "Enter the month, day and last two digits of a year using numbers, pressing enter after each one: ";
	cin >> month >> day >> year;
	
	// Variable to hold day * month
	int dayMonthComp = day * month;
	
	// Compare the numbers and print results
	if(dayMonthComp == year)
	 	cout << month << "/" << day << "/" << year << " is a magic date!\n";
	else 
		cout << month << "/" << day << "/" << year  << " is not a magic date.\n";
return 0;
}
