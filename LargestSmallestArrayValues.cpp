// This program lets the user enter 10 values into an array. The 
// program will then display the largest and smallest values stored 
// in the array
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const int NUMBER_SIZE = 10;			// Number of elements in the array
	int numbers[NUMBER_SIZE];			// Array to hold the values

	// Loop to enter the values into the array 
	for (int index = 0; index < NUMBER_SIZE; index++)
	{
		cout << "Enter a value for element " << (index + 1) << endl;
		cin >> numbers[index];
	}
	int highestNumber = numbers[0], lowestNumber = numbers[0];	// Declare highest and lowest variables

	// Array to find the highest and lowest numbers
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		if (highestNumber < numbers[i])
			highestNumber = numbers[i];
		if (lowestNumber > numbers[i])
			lowestNumber = numbers[i];
	}

	cout << "The highest number is: " << highestNumber << endl;
	cout << "The lowest number is: " << lowestNumber << endl;
	return 0;
}


