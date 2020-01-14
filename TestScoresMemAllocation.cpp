// This program will allocate memory for a user defined amount
// and will sort, average and display the information.
#include <iomanip>
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(double *, int);
double getAverage(double *, int);

int main()
{
	int numTests;

	cout << "Enter the number of tests:\n";
	cin >> numTests;

	// Dynamically allocate enough memory
	double *testScores = new double[numTests];

	// Get the scores
	for(int i = 0; i < numTests; i++)
	{
		cout << "Enter the score for test " << (i + 1) << endl;
		cin >> *(testScores + i);
	}

	sortArray(testScores, numTests);
	double average = getAverage(testScores, numTests);

	cout << "Sorted test scores are: " << endl;
	for(int i = 0; i < numTests; i++)
	{
		cout << *(testScores + i) << " " << endl;
	}
	cout << "Average test score: " << average << endl;
}

double getAverage(double* arr, const int SIZE)
{
	double sum = 0.0;
	for(int i = 0; i < SIZE; i++)
	{
		sum += *(arr + i);
	}
	return sum / SIZE;
}

void sortArray(double *ptr, int arraySize){
    //temporary variable to help in swapping
    double temp;

    //boolean variable that will control when
    //array is done sorting
    bool swapped = true;

    while(swapped){
        swapped = false;

        //loop on all elements
        for(int counter = 0; counter < arraySize - 1; counter++){
            //check if following element is greater
            //than current element
            if(*(ptr+counter) > *(ptr+counter+1)){
                //if so, perform swap
                temp = *(ptr+counter+1);
                *(ptr+counter+1) = *(ptr+counter);
                *(ptr+counter) = temp;

                //and update boolean variable
                swapped = true;

            }   //if ends here
        }   //for loop ends here
    }   //while loop ends here
}
