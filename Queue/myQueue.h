#ifndef _MYQUEUE_H_ 
#define _MYQUEUE_H_

using namespace std; 

template <class T> 
class myQueue { 
public:
	myQueue(int maxSz);
	~myQueue();
	void enqueue(T item);
	T dequeue();
    int currentSize();
    bool isEmpty();
    bool isFull(); private:
	T *contents; /*Dynamic initiate (C++ keyword new) the holder array*/
	int front,rear; /*Index in the array of the front and rear element*/
	int arrayLength; /*The length of the contents holder array*/
		/* Keep in mind that the Queue will only hold up to (arrayLength - 1) elements*/
	int numElements;
};
template <class T> 
myQueue<T>::myQueue(int maxSz) {
	contents = new T[maxSz];
	arrayLength = maxSz + 1;
	front = -1;
	rear = -1;
	numElements = 0;
}

template <class T> 
myQueue<T>::~myQueue() {
	delete[] contents;
}

template <class T> 
void myQueue<T>::enqueue(T item) {

	// Calculate the new rear position
	rear = (rear + 1) % arrayLength;
	// Insert a new item
	contents[rear] = item;
	numElements++;
}

template <class T> 
T myQueue<T>::dequeue() {

	front = (front + 1) % arrayLength;
	numElements--;
	return contents[front];
}

template <class T> 
int myQueue<T>::currentSize() {
	return numElements;
}

template <class T> 
bool myQueue<T>::isEmpty() {

	bool status;
	if (numElements)
		status = false;
	else
		status = true;
	return status;
}

template <class T> 
bool myQueue<T>::isFull() {

	bool status;
	if (numElements < arrayLength - 1)
		status = false;
	else
		status = true;
	return status;
}
#endif
