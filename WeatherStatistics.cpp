// This program will use a structure and arrays to store and display weather information
#include <iostream>
#include <iomanip>
using namespace std;

struct WeatherData
{
	double rainfall;
	double highTemp;
	double lowTemp;
	double averageTemp;
};

int main()
{
	double totalRainfall, averageTemp, totalTemp, lowestTemp, highestTemp;
	const int NUM_MONTHS = 12;
	WeatherData weatherYear[NUM_MONTHS];
	//highestTemp = weatherYear[0].highTemp;
	//lowestTemp = weatherYear[0].lowTemp;
	int i;	// Index

	// For loop to obtain weather data for each month
	for(i = 0; i < NUM_MONTHS; i++)
	{
       		double highestTemp = weatherYear[0].highTemp;
        	double lowestTemp = weatherYear[0].lowTemp;
		cout << "Enter rainfall in inches for month " << (i + 1) << ": " << endl;
		cin >> weatherYear[i].rainfall;
		cout << "Enter the high temp for month " << (i + 1) << ": " << endl;;
		cin >> weatherYear[i].highTemp;
		cout << "Enter the low temp for month " << ( i + 1) << ": " << endl;
		cin >> weatherYear[i].lowTemp;

		if(weatherYear[i].highTemp > highestTemp)
			highestTemp = weatherYear[i].highTemp;
		if(weatherYear[i].lowTemp < lowestTemp)
			lowestTemp = weatherYear[i].lowTemp;

		weatherYear[i].averageTemp = ((weatherYear[i].lowTemp + weatherYear[i].highTemp) / 2);
		totalRainfall += weatherYear[i].rainfall;
		totalTemp += weatherYear[i].averageTemp;
	}

	averageTemp = (totalTemp / 12);
	// Loop to display all of the data
	for(i = 0; i < NUM_MONTHS; i++)
	{
		cout << "Rainfall for month " << (i + 1) << ": " << weatherYear[i].rainfall << endl;
		cout << "High temperature for month " << (i + 1) << ": " << weatherYear[i].highTemp << endl;
		cout << "Low temperature for month " << (i + 1) << ": " << weatherYear[i].lowTemp << endl;
		cout << "Average temperature for month " << (i + 1) << ": " << weatherYear[i].averageTemp << endl;
	}
	cout << "Yearly Stats:\n";
	cout << "----------------------------------";
	cout << "Total Rainfall: " << totalRainfall << endl;
	cout << "Average Temperature: " << averageTemp << endl;
	cout << "Lowest temp: " << lowestTemp << endl;
	cout << "Highest temp: " << highestTemp << endl;

return 0;
}
