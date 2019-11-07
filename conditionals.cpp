#include <iostream>
using namespace std;

int main(){

	double num1, num2, quotient;

	cout << "Enter the first number: " << endl;
	cin >> num1;

	cout << "Enter the second number : " << endl;
	cin >> num2;

	if(num2 == 0)
	{
		cout << "Division by zero is not possible\n";
		cout << "Please run the program and try again.";
	}
	else
	{
		quotient = num1 / num2;
		cout << "The quotient of " << num1 << " divided by " << num2;
		cout << " is " << quotient << ".\n";
	}

	// Nested if statements
 	char employed, 		// Currently Empoyed, Y or N
		recentGrad;	// Recent Graduate, Y or N
	// Is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << " with Y for yes and N for no\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Are you a recent graduate? ";
	cin >> recentGrad;

	//Determine the user's loan qualification
	if(employed == 'Y')
	{
		if(recentGrad == 'Y')
		{
			cout << "You qualify for the special ";
			cout << "interest rate";
		}
	}

	// Constants for grade thresholds
	const int A_SCORE = 90,
		  B_SCORE = 80,
		  C_SCORE = 70,
		  D_SCORE = 60;
	int testScore; // To hold a numeric test score

	cout << "Enter your numeric test score and I will\n"
		<< "tell you the letter grade you earned";
	cin >> testScore;

	//Determine the letter grade
	if(testScore >= 90)
		cout << "Your grade is an A.\n";
	else if(testScore >= 80)
		cout << "Your grade is a B.\n";
	else if(testScore >= 70)
		cout << "Your grade is a C.\n";
	else if(testScore >= 60)
		cout << "Your grade is a D.\n";
	else
		cout << "Your grade is an F.\n"; 
return 0;
}
