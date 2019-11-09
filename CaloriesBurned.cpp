// This program uses a loop to display the number of calories burned after 5, 10, 15, 20
// 25, and 30 minutes if 3.6 calories are burned per minute.
// By Colten Coffman

#include <iostream>
using namespace std;

int main()
{
	const double CALS_PER_MINUTE = 3.6;

	for (int time = 0; time <= 30; time += 5)
	{
		double calsBurned = CALS_PER_MINUTE * time;
		cout << "After " << time << " minutes, you have burned "
			<< calsBurned << " calories\n";
	}
return 0;
}
