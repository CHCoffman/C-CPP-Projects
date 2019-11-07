// Program that calculates and displays a person's BMI
// and determines if they are overweight, optimal, or underweight
// Colten Coffman

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	
	float height, weight, BMI;

	// Get the person's height and weight
	cout << "What is your height, in inches? ";
	cin >> height;
	cout << "What is your weight, in pounds? ";
	cin >> weight;

	// Calculate BMI
	BMI = weight * 703 / (pow(height,2));

	cout << "Your BMI is " << BMI << endl;
	
	// Display BMI status
	if(BMI > 25)
		cout << "You are overweight\n";
	else if(BMI > 18.5 && BMI < 25)
		cout << "You are the optimal weight.\n";
	else
		cout << "You are underweight.\n";
return 0;
}
