// This program will use functions to calculate the average of a group of test scores
// and drop the lowest one.
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Function prototypes
int getScore(int);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

// Global variables
int score;

int main()
{
	int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;
	score1 = getScore(score1);
	score2 = getScore(score2);
	score3 = getScore(score3);
	score4 = getScore(score4);
	score5 = getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

}

// Asks user for test score, stores and validates it
int getScore(int score)
{
	cout << "Please enter the scores: ";
	cin >> score;
	while (score < 0 || score > 100)
	{
		cout << "Please enter a valid score";
		cin >> score;
	}
	return score;

}

// Calculate and display the average of the four highest scores
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = findLowest(score1, score2, score3, score4, score5);
	int average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4;
	cout << "The lowest score of " << lowest << " was dropped.\n";
	cout << "The average is: " << average;
}

// Finds and returns the lowest of the five scores
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = score1;
	if (score2 < lowest)
		lowest = score2;
	else if (score3 < lowest)
		lowest = score3;
	else if (score4 < lowest)
		lowest = score4;
	else if (score5 < lowest)
		lowest = score5;
	return lowest;
}