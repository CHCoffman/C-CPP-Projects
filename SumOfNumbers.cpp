/* Program that asks the user for a positive integer value. The program should use a loop to 
get the sum o all integers from 1 up to the number entered. 
*/
#include <iostream>
using namespace std;

int main()
{

	int number, totalSum = 0;

	cout << "Enter a positive number: ";
	cin >> number;
	if (number > 0) 
	{
		for (int initNum = 0; initNum <= number; initNum++) 
		{
			totalSum += initNum;
		}
	}
	else
	{
		cout << "invalid number, must be positive.";
	}
	cout << "The sum of all numbers leading to your number is: " << totalSum;

	return 0;
}
