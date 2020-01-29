#include <iostream>
#include <iomanip>
using namespace std;

int tempConvert(int);

int main()
{
	int tempToConvert, stepCount;
	cout << "Enter the starting temperature (in celsius) that";
	cout << " you want to convert.";
	cin >> tempToConvert;
	cout << "\nWhat do you want the step count to be?";
	cin >> stepCount;

	cout << "-------------------------------------";
	cout << "\nCelsius\t\t\tFahrenheit" << endl;

	for(int i = 0; i < 10; i++)
	{
		cout << tempToConvert <<"\t\t\t" << tempConvert(tempToConvert) << endl;
		tempToConvert += stepCount;
	}

return 0;
}

// Function to convert the temperature given
int tempConvert(int celsius)
{

	int fahrenheit = celsius * 9 / 5;
	fahrenheit += 32;

return fahrenheit;
}
