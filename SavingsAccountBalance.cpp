// This program calculates the balance of a savings account at the end of a period of time.
// Colten Coffman

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// Variables to be used in calculations
	double interestRate, 
		startingBalance,
		amountWithdrawn,
		amountDeposited, 
		monthlyInterest,
		endBalance=0,
		totalWithdrawals=0,
		totalDeposits=0,
		totalInterest=0;
	int numberOfMonths;

	// Get starting balance, interest, and number of months
	cout << "What is the starting balance of the account? ";
	cin >> startingBalance;
	cout << "What is the interest rate? ";
	cin >> interestRate;
	cout << "How many months? ";
	cin >> numberOfMonths;
	monthlyInterest = interestRate / 12;

	for (int i = 1; i <= numberOfMonths; i++)
	{
		cout << "How much was withdrawn for month " << i << "?" << endl;
		cin >> amountWithdrawn;
		cout << "How much was deposited for month " << i << "?" << endl;
		cin >> amountDeposited;
		if (amountDeposited > -1 && amountWithdrawn > -1)
		{

			totalWithdrawals += amountWithdrawn;
			totalDeposits += amountDeposited;
		}
		else
			cout << "Amount canot be negative";
	}
	endBalance = (startingBalance + totalDeposits - totalWithdrawals);
	totalInterest = endBalance * monthlyInterest;
	endBalance += totalInterest;
	cout << "The end balance is: $" << endBalance << endl ;
	cout << "Total withdrawals: $" << totalWithdrawals << endl;
	cout << "Total deposits: $" << totalDeposits << endl;
	cout << "Total interest: $" << totalInterest << endl;

	return 0;
}
