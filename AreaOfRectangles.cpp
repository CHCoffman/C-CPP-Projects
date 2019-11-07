#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int length1, length2, width1, width2;
	
	// Get length and width of first rectangle
	cout << "Enter the length and width of rectangle 1: ";
	cin >> length1 >> width1;
	
	// Get length and width of second rectangle
	cout << "Enter the length and width of rectangle 2: ";
	cin >> length2 >> width2;

	// Get both areas
	int area1 = length1 * width1;
	int area2 = length2 * width2;

	// Compare areas and output results
	if(area1 > area2){
		cout << "Rectangle 1 has a larger area.";
	}
	else if (area2 > area1){
		cout << "Rectangle 2 has a larger area.";
	}
	else 
		cout << "The rectangles are equal!\n";
return 0;
}

