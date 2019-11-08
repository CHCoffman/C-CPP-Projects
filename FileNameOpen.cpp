// Program will allow the user to name the file that they want to process, test whether or not the file was opened
// and process the necessary data from there.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string filename;
	string name;
	
	// Get the filename from the user.
	cout << "Enter the filename: ";
	cin >> filename;

	inputFile.open(filename.c_str());
	
	// If the file successfully opened, process it.
	if(inputFile)
	{
		// Read the name from the file and display
		while (inputFile >> name)
		{
			cout << name << endl;
		}
	
		// Close the file
		inputFile.close();
	}
	else
	{
		// Display an error message
		cout << "Error opening file\n";
	}
	return 0;
}
