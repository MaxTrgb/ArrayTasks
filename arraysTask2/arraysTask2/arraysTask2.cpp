/*2. Compress the array by removing from it all elements whose modulus does not exceed 1.*/

#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int j;
	int arr[N];

	cout << "\nEnter values for array:\n";

	// Input numbers to array
	for (int i = 0; i < N; i++) {

		cin >> j;
		arr[i] = j;

	}

	for (int i = 0; i < N; i++) {

		if (arr[i] == 1) { // If number is equal to 1 show it 

			cout << arr[i];
		}
		else {
			arr[i] = 0; // Not 1 transform to 0
			cout << arr[i];

		}
	}
}