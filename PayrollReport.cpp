// This program will display a weekly payroll report
// using loops
#include <iostream>
using namespace std;

int main()
{
	int empNumber, grossPay, stateTax, fedTax,
		ficaWitholding;

	for (int i = 0; i < 5; i++)
	{
		// Get the data
		cout << "Enter the employee number or 0 to quit: \n";
		cin >> empNumber;
		if (empNumber == 0)
			break;
		cout << "Enter the gross pay:\n";
		cin >> grossPay;
		cout << "Enter the state tax:\n";
		cin >> stateTax;
		cout << "Enter the federal tax: \n";
		cin >> fedTax;
		cout << "Enter the fica witholding:\n";
		cin >> ficaWitholding;

		// Display the results
		cout << "Employee Number: " << empNumber << endl;
		cout << "Gross Pay: " << grossPay << endl;
		cout << "State Stax: " << stateTax << endl;
		cout << "Federal Tax: " << fedTax << endl;
		cout << "FICA Witholding: " << ficaWitholding << endl;
		int netPay = grossPay - stateTax - fedTax - ficaWitholding;
		cout << "Net pay for employee " << empNumber 
			 << ": " << netPay << endl;
	}
	return 0;
}
