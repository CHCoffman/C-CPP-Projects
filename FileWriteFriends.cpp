// Writing friend's names to a file. 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	string name1, name2, name3;

	// Open an output file.
	outputFile.open("Friends.txt");

	// Get three numbers from the user.
	cout << "Enter the names of 3 friends.\n";
	cout << "Friend #1: ";
	cin >> name1;
	cout << "Friend #2: ";
	cin >> name2;
	cout << "Friend #3: ";
	cin >> name3;

	// Write the numbers to the file.
	outputFile << name1 << endl;
	outputFile << name2 << endl;
	outputFile << name3 << endl;
	cout << "The names were saved to a file.\n";

	// Close the file
	outputFile.close();
	return 0;
}
