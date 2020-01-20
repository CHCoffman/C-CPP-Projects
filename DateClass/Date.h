#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int month, day, year;
	string monthNames[12] = {"January", "February", "March", "April",
				"May", "June", "July", "August", "September",
				"October", "November", "December"};
public:
	// Constructor
	Date(int m = 1, int d = 1, int y = 1970)
	{
		if(m < 1 || m > 12)
		{
			cout << "Invalid month";
		}
		if(d < 1 || d > 31)
		{
			cout << "Invalid day";
		}
		month = m;
		day = d;
		year = y;
	}

	// Getter and setter functions
	int getDay(){return day;}
	int getMonth(){return month;}
	int getYear(){return year;}
	
	void setDay(int d)
	{
		if(d < 1 || d > 31)
       		 {
     		       cout << "Invalid day";
	         }
		else
			day = d;
	}
	void setMonth(int m)
	{
		if(m < 1 || m > 12)
		{
			cout << "Invalid month";
		}
		else
			month = m;
	}
	void setYear(int y)
	{
		year = y;
	}

	// Display functions
	void date1()
	{
		cout << month << "/" << day << "/" << year;
		cout << endl;
	}
	void date2()
	{
		cout << monthNames[month - 1] << " ";
		cout << day << ", " << year << endl;
	}
	void date3()
	{
		cout << day << " " << monthNames[month - 1] << " ";
		cout << year << endl;
	}
};
#endif
