// This program will use pointers to take an array and display 
// it in reverse order.

#include <iostream>
using namespace std;

// Function prototype
int* reverseArray(int *, int);

int main()
{
	const int SIZE = 10;
	
	// Beginning array
	int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// Display the first array
	cout << "Beginning array\n";
	for(int i = 0; i < SIZE; i++)
		cout << *(arr + i) << " ";

	// Pointer that gets address of new array
	int *revArr = reverseArray(arr, SIZE);

	// Print reversed array
	cout << "Reversed array:\n";
	for(int i = 0; i < SIZE; i++)
		cout << *(revArr + i) << " ";
	cout << endl;

	// Get rid of allocated memory
	delete [] revArr;
return 0;
}

int* reverseArray(int *arr, int SIZE)
{
	// Dynamically allocate new array
	int *ptr = new int[SIZE];

	// Put values in reverse order from first array
	for(int i = 0; i < SIZE; i++)
	{
		*(ptr + SIZE - 1 - i) = *(arr + i);
	}
	return ptr;
}
