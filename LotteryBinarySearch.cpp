// This program will use a binary seach through 10 five digit lotto 
// tickets, comparing them to numbers given by the user to determine
// if they won.

#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int[], int, int);
const int SIZE = 10;
int main()
{
	int winningNumbers, results;
	int ticketNums[SIZE] = { 13579, 26791, 26792, 33445, 55555,
							62483, 77777, 79422, 85647, 93121 };

	// Get the winning numbers
	cout << "Enter the winning lottery numbers: \n";
	cin >> winningNumbers;
	results = binarySearch(ticketNums, SIZE, winningNumbers);

	if (results == -1)
		cout << "You did not win.";
	else
	{
		cout << "You won the lottery!" << endl;
		cout << (results + 1) << " was the winning ticket." << endl;
	}


	return 0;
}

int binarySearch(const int list[], int numTickets, int value)
{
	int first = 0,
	last = numTickets - 1,
		middle,
		position = -1;
	bool win = false;

	while (!win && first <= last)
	{
		middle = (first + last) / 2;
		if (list[middle] == value)
		{
			win = true;
			position = middle;
		}
		else if (list[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}


