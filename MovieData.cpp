// This program will use a structure named MovieData to 
// store information about a movie.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData
{
	string title;
	string director;
	int yearReleased;
	int runningTime;
};

void getData(MovieData&);
void showData(MovieData);

int main()
{
	MovieData movieOne;
	MovieData movieTwo;

	getData(movieOne);
	getData(movieTwo);

	showData(movieOne);
	showData(movieTwo);
return 0;
}

// Function that gets the information for each movie.
void getData(MovieData &m)
{
	// Get the movie title
	cout << "Enter the movie title: " << endl;
	cin.ignore();
	getline(cin, m.title);

	// Get the movie director
	cout << "Enter the last name of the director: " << endl;
	cin >> m.director;

	// Get the year the movie was released.
	cout << "Enter the year the movie was released" << endl;
	cin >> m.yearReleased;

	// Get the running time
	cout << "How long is the movie in minutes?: " << endl;
	cin >> m.runningTime;
}

// Function to display the movie information

void showData(MovieData m)
{
	cout << "Movie Title: " << m.title << endl;
	cout << "Director: " << m.director << endl;
	cout << "Year released: " << m.yearReleased << endl;
	cout << "Runtime: " << m.runningTime << endl;
}
