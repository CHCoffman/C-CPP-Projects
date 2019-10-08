// SumOfTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Sum of two int variables
	int x = 50, y = 100;
	auto total = x + y;
	cout << total << endl;

	// Sales Prediction
	int totalSales;
	totalSales = 8600000;
	double eastCoastSales = totalSales * .58;
	cout << "Total Sales is " << totalSales << " Which means East Coast Sales is " << eastCoastSales << endl;

	// Sales Tax
	double countyTax = .02, stateTax = .04;
	int purchase = 95;
	double totalTax = (countyTax + stateTax) * purchase;
	cout << "total tax is " << totalTax << endl;
	double taxCheck = .06 * 95;
	cout << "to check the previous statement " << taxCheck << endl;

	// Restaurant bill
	/*
	float mealCost = 88.67;

	float tax, total, tip;

	tax = mealCost * .0875;
	tip = (mealCost + tax) * .2;
	total = mealCost + tax + tip;

	cout << " meal: " << mealCost << endl; 
	cout << " tip: " << tip << endl;
	cout << " tax: " << tax << endl;
	cout << " Total: " << total << endl*/

	//Average of values
	int val1 = 28, val2 = 32, val3 = 37, val4 = 24, val5 = 33, sum;

	sum = val1 + val2 + val3 + val4 + val5;
	int average = sum / 5;
	cout << "Sum is: " << sum << endl << "average is: " << average;
	
	return 0;
}

