// This program plays a word game with the user
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int SIZE = 6;
	string words[SIZE] = {"name", "city", "profession", 
			"college", "animal", "pet name"};
	int age = 0;

	for(int i = 0; i < SIZE; i ++)
	{
		cout << "Enter a " << words[i] << ":\n";
		cin >> words[i];
	}
	cout << "Enter the age: ";
	cin >> age;

	cout << "There was once a person named " << words[0];
	cout << " who lived in " << words[1];
	cout << "\nAt the age of " << age;
	cout << " " << words[0] << " went to " << words[3] << ".";
	cout << "\n" << words[0] << " graduated and went to work as a ";
	cout << words[2] << "\n. Then, " << words[0] << " adopted a ";
	cout << words[4] << " named " << words[5] << "." << endl;
	cout << "They lived happily ever after! " << endl;
return 0;
}
