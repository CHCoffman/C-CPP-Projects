// LearningExamplesChapter5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile; 
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file.\n";

	// Write four names to the file

	outputFile << "bach.\n";
	outputFile << "beethoven.\n";
	outputFile << "mozart.\n";
	outputFile << "schubert.\n";

	// Close the file.
	outputFile.close();
	cout << "Done.\n";
	return 0;
}
