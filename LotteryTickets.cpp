// This program will use a linear seach through 10 five digit lotto 
// tickets, comparing them to numbers given by the user to determine
// if they won.

#include <iostream>
using namespace std;

// Function prototype
int searchList(const int[], int, int);
const int SIZE = 10;
int main()
{
	int winningNumbers, results;
	int ticketNums[SIZE] = { 13579, 26791, 26792, 33445, 55555,
							62483, 77777, 79422, 85647, 93121 };

	// Get the winning numbers
	cout << "Enter the winning lottery numbers: \n";
	cin >> winningNumbers;
	results = searchList(ticketNums, SIZE, winningNumbers);

	if (results == -1)
		cout << "You did not win.";
	else
	{
		cout << "You won the lottery!" << endl;
		cout << (results + 1) << " was the winning ticket." << endl;
	}


	return 0;
}

int searchList(const int list[], int numTickets, int value)	
{
	int index = 0;
	int position = -1;
	bool win = false;

	while (index < numTickets && !win)
	{
		if (list[index] == value)
		{
			win = true;
			position = index;
		}
		index++;
	}
	return position;
}


