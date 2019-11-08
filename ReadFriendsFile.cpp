// LearningExamplesChapter5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// When the program reads the data from the file, it goes byte by byte and looks for whitespace characters (space, newline, etc.)
// That will tell it that it has hit the one part needed and it assigns it to the 'name' variable.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	string name;

	inputFile.open("Friends.txt");
	cout << "Reading data from the file.\n";

	inputFile >> name;		// Read name 1 from the file
	cout << name << endl;	// Display name 1

	inputFile >> name;		// Read name 2 from the file
	cout << name << endl;	// Display name 2

	inputFile >> name;		// Read name 3 from the file
	cout << name << endl;	// Display name 3

	inputFile.close();
	return 0;
}

