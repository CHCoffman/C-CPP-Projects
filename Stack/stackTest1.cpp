#include <iostream>
#include "myStack.h"
using namespace std; 

void postfixTest() {
	myStack operandStack(100);
	cout << "Please enter the operands (integers 1~9) and operators (+, -, *, /) one by one..." << endl;
	cout << "and enter '=' to indicate the end of the expression and to output the result." << endl;
	while (1) {
		char inputHolder;
		cin >> inputHolder;
		if (inputHolder >= '0' && inputHolder <= '9')
		{
			operandStack.push(inputHolder - '0');
		}
		else if (inputHolder == '+')
		{
			int operand1 = operandStack.pop();
			int operand2 = operandStack.pop();
			int result = operand1 + operand2;
			operandStack.push(result);
		}
		else if (inputHolder == '-')
		{
			int operand1 = operandStack.pop();
			int operand2 = operandStack.pop();
			if (operand2 > operand1)
			{
				int result = operand2 - operand1;
				operandStack.push(result);
			}
			else {
				int result = operand1 - operand2;
				operandStack.push(result);
			}
				
		}
		else if (inputHolder == '*')
		{
			int operand1 = operandStack.pop();
			int operand2 = operandStack.pop();
			int result = operand1 * operand2;
			operandStack.push(result);
		}
		else if (inputHolder == '/')
		{
			int operand1 = operandStack.pop();
			int operand2 = operandStack.pop();
			int result = operand1 / operand2;
			operandStack.push(result);
		}
		else if (inputHolder == '=')
		{
			
			cout << "Result: " << operandStack.pop();
			break;
		}
		else
		{
			cout << "invalid operation";
			break;
		}
	}
}
int main() {
	cout << "Testing the basic functions of the stack..." << endl;
	cout << "Please enter the max capacity of the testStack: ";
	int testSize;
	cin >> testSize;
	myStack testStack(testSize);
	cout << "Testing..." << endl;
	while (1) {
		cout << "Please enter 'p' for push, 'o' for pop, 'e' for exit: ";
		char userChoice;
		cin >> userChoice;
		if (userChoice == 'e')
			break;
		switch (userChoice) {
		case 'p':
			if (!testStack.isFull()) {
				cout << "Please enter the integer you would like to push: ";
				int userInt;
				cin >> userInt;
				testStack.push(userInt);
			}
			else
				cout << "Nothing has been pushed in. The stack is full!" << endl;
			break;
		case 'o':
			if (!testStack.isEmpty())
				cout << testStack.pop() << " has been popped out" << endl;
			else
				cout << "Nothing has been popped out. The stack is empty!" << endl;
			break;
		default:
			cout << "Illegal user-input character. Please try again." << endl;
		}
	}
	cout << "Now, start to use a stack to evaluate postfix expressions..." << endl;
	postfixTest();
	return 0;
}
