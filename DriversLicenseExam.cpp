// This program will use two arrays to compare an inputted students answers with
// the correct answers to the written portion of a driver's exam. If the student
// answers with 15/20 correct, they will pass. Only 'A', 'B', 'C', 'D' answers will
// be accepted.

#include <iomanip>
#include <iostream>
using namespace std;

const int NUMBER_OF_ANSWERS = 20;
int wrongAnswers = 0;
int main()
{
	char correctAnswers[] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
				  'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };					// Array to hold the correct answers
	char studentAnswers[NUMBER_OF_ANSWERS];										// Array to hold the student's answers

	// Loop to input the student's answers
	for (int i = 0; i < NUMBER_OF_ANSWERS; i++)
	{
		cout << "Enter the student's answer for question " << (i + 1) << endl;
		cin >> studentAnswers[i];
		// Input validation, only accept A B C D
		while(studentAnswers[i] < 'A' || studentAnswers[i] > 'D')
		{
			cout << "Answers must be 'A' 'B' 'C' or 'D'\n";
			cout << "Enter the student's answer for question " << (i + 1) << endl;
			cin >> studentAnswers[i];
		}
		if (studentAnswers[i] != correctAnswers[i])								// Comparing answers, add to wrong answer count if they don't match
			wrongAnswers++;
	}

	// Output whether student passed or failed based off of number of wrong answers
	cout << "There were " << wrongAnswers << " wrong answers out of " << NUMBER_OF_ANSWERS << endl;
	if (wrongAnswers > 5)
		cout << "The student did not pass.";
	if (wrongAnswers <= 5)
		cout << "The student passed. Congratulations!";

	return 0;
}



