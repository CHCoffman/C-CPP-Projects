// The switch statement in this program tells the user what they just entered
#include <iostream>
using namespace std;
int main()
{
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;
	switch (choice)
	{
		case 'A': cout << "You have entered A.\n";
			break;
		case 'B': cout << "You have entered B.\n";
			break;
		case 'C': cout << "You have entered C.\n";
			break;
		default: cout << "You did not enter A, B or C.";
	}
	return 0;
}
