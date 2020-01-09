#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

	int main()
	{
		vector<int> numbers(100);
		cout << "The numbers vector has"
			<< numbers.size() << " elements" << endl;
		cout << "Now I will clear them.";
		numbers.clear();
		cout << "Now numbers has: " << numbers.size()
			<< " elements." << endl;
		return 0;
	}
