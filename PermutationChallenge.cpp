// This program will find every possible combination of the
// letters in "CAT"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to take 3 parameters: string, beginning of index
// and end of index

void permute(string a, int b, int c)
{

	if(b == c)
		cout << a << endl;
	else
	{
		for(int i = b; i <= c; i++)
		{
			swap(a[b], a[i]);
			permute(a, b+1, c);
			swap(a[b], a[i]);
		}
	}
}

// Driver
int main()
{

	string str= "CAT";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}
