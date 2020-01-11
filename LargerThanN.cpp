// This program will use a function that accepts three arguments: an array, the size of the array
// and a number 'n'.The function should display all of the numbers in the array that are greater than the number 'n'.

#include <iostream>
using namespace std;

void greaterThanN(const int nums[], int size, int n);	// Function prototype

int main()
{
	int numbers[] = { 10, 15, 22, 33, 10, 43, 3, 2 };	// Array with the elements
	cout << "Numbers present in array:\n";

	// Loop to display array elements
	for (int i = 0; i < 8; i++)
	{
		cout << numbers[i] << endl;
	}
	cout << endl;

	greaterThanN(numbers, 8, 10);						// Function initialization

	return 0;
}
// Function to find the elements in the array that are larger than 'n'.
void greaterThanN(const int nums[], int size, int n)
{
	cout << "Numbers present in the array that are greater than " << n << ": \n";
	for (int i = 0; i < size; i++)
	{
		if (nums[i] > n)
		{
			cout << nums[i] << endl;
		}
	}
}



