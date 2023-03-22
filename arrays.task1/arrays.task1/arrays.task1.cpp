/*1. Change the order of placement of elements in the array to reverse.*/

#include <iostream>
using namespace std;


int main()
{
	const int N = 5;
	int j;
	int arr[N];

	cout << "\nEnter values for array:\n"; 

	// Iput integers
	for (int i=0; i < N; i++) {

		cin >> j;
		arr[i] = j;
	}

	cout << "\nReversing...\n" << endl;

	// Changing array order 
	for (int i = 0; i < N / 2; i++) {

		int temp = arr[i];

		arr[i] = arr[N - 1 - i];

		arr[N - 1 - i] = temp;
	}
	// Display o the user
	for (int i = 0; i < N; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;

}