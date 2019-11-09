// This program asks the user for the speed of a vehicle in mph and how many hours it has traveled
// There will then be a loop used to display the distance.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int speed, time, distance;

	cout << "Please enter your speed: " << endl;
	cin >> speed;
	cout << "Please enter the time you traveled, rounded to the nearest hour: " << endl;
	cin >> time;

	cout << "Hour \t Distance Traveled" << endl;
	cout << "-----------------------------------" << endl;

	if (speed > 0 && time > 0)
	{
		for (int number = 0; number <= time; number++)
		{
			distance = speed * number;
			cout << number << "\t\t" << distance << endl;

		}
	}
	else
		cout << "Invalid input";

	return 0;
}

