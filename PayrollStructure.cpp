#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct PayRoll
{
	int empNumber;		// Employee number
	string name;		// Employee's name
	double hours;		// Hours worked
	double payRate;		// Hourly pay rate
	double grossPay;	// Gross pay
};

int main()
{
	PayRoll employee;	//employee is a PayRoll structure

	// Get the employee's number.
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;

	// Get the employee's name.
	cout << "Enter the employee's name: ";
	cin >> employee.name;

	// Get the employee's hours worked.
	cout << "Enter the hours worked by the employee: ";
	cin >> employee.hours;

	// Get the employee's pay rate.
	cout << "Enter the employee's pay rate: ";
	cin >> employee.payRate;

	// Get the employee's gross pay.
	employee.grossPay = employee.hours * employee.payRate;

	// Display the employee data.
	cout << "Employee payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << employee.grossPay << endl;


	return 0;
}



