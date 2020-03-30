#include <iostream>
using namespace std;
  
// Merges two sorted subarrays of A[]. 
// First sorted subarray is A[l..m].
// Second sorted subarray is A[m+1..r].
// You might want to call this function in function mergeSort().
void merge(int A[], int l, int m, int r) 
{ 
int n1, n2, i, j, k;
n1 = m - l + 1;
n2 = r - m;
int L[n1], R[n2];

// Left Part
for(i = 0; i < n1; i++)
{
	L[i] = A[l + i];
}
// Right part
for(j = 0; j < n2; j++)
{
	R[j] = A[m + j + 1];
}
i = 0, j = 0;

// Compare and merge
for(k = l; i < n1 && j < n2; k++)
{
	if(L[i] < R[j])
		A[k] = L[i++];
	else
		A[k] = R[j++];
}

// if left array has more elements then L goes into A 
while(i < n1)
{
	A[k++] = L[i++];
}

// if right array has more elements then R goes into A
while(j < n2)
{
	A[k++] = R[j++];
}
} 

// using mergeSort to sort sub-array A[l..r]  
// l is for left index and r is right index of the 
// sub-array of A[] to be sorted
void mergeSort(int A[], int l, int r) 
{ 
int n;
if(l < r)
{
	n = (l + r) / 2;
	mergeSort(A, l, n);
	mergeSort(A, n + 1, r);
	merge(A, l, n, r);
}
} 
  

int main() 
{ 
    cout << "Please enter the length (number of elements) of the input array: ";
	int n;
	cin >> n;
	
	if(n <= 0) {
		cout << "Illegal input array length!" << endl;
		return 0;
	}
	
	int* A = new int [n];
	
	cout << "Please enter each element in the array" << endl; 
	cout << "(each element must be an integer within the range of int type)." << endl;
	for(int i=0; i<n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
  
    cout << "Given array A[] is: "; 
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;
	
  
    mergeSort(A, 0, n-1); 
  
    cout << "After mergeSort, sorted array A[] is: "; 
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;
	
	
	delete [] A;
    return 0; 
} 