#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num1, num2;

	// Get the two numbers
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	
	// Compare the numbers and print results
	if(num1 > num2)
		cout << num1 << " is larger than " << num2;
	else
		cout << num2 << " is larger than " << num1;
return 0;
}
