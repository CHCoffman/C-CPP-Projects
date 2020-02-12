#include <iostream> 
#include "myStack.h"
using namespace std; 
/*
 * Constructor
 * Usage: myStack(maxSz);
 * -------------------------
 * A new stack variable is initialized.  The initialized
 * stack is made empty.  maxSz is used to determine the
 * maximum number of character that can be held in the
 * stack.
 */ 

myStack::myStack(int maxSz) {
	contents = new int[maxSz];
	maxSize = maxSz;
	top = -1;
}

/* Destructor
 * Usage: delete ptr
 * -----------------------
 * This frees all memory associated with the stack.
 */
 
myStack::~myStack() {
	delete [] contents;
}

/*
 * Functions: push, pop
 * Usage: s1.push(element); element = s1.pop();
 * --------------------------------------------
 * These are the fundamental stack operations that add an element to
 * the top of the stack and remove an element from the top of the stack.
 * A call to pop on an empty stack or to push on a full stack
 * is an error.  Make use of isEmpty()/isFull() (see below)
 * to avoid these errors.
 */

void myStack::push(int element) {
	// Check to see if the stack is full
	if (isFull())
	{
		cout << "Stack is full.\n";
	}
	// Insert the element (if not full)
	else
	{
		top++;
		contents[top] = element;
	}
}
int myStack::pop() {
	// Check to see if there are elements to pop in the stack
	if (isEmpty())
	{
		cout << "Stack is empty.";
		return top;
	}
	// Remove top element
	return contents[top--];
}
/*
 * Functions: isEmpty, isFull
 * Usage: if (s1.isEmpty()) ...
 * -----------------------------------
 * These return a true value if the stack is empty
 * or full (respectively).
 */

bool myStack::isEmpty() const {
	bool status;
	if (top == -1)
		status = true;
	else
		status = false;
	return status;
}
bool myStack::isFull() const {
	bool status;
	if (top == maxSize -1)
		status = true;
	else
		status = false;
	
	return status;
}
