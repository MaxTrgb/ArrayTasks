/*3. Compress the array by removing from it all the elements whose modulus is in the interval
[à, b]. Fill the free elements at the end of the array with zeros.*/
#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int j, startPoint, endPoint;
	int arr[N];

	cout << "\nEnter values for array:\n";

	// Input numbers to array
	for (int i = 0; i < N; i++) {

		cin >> j;
		arr[i] = j;

	}

	// Setting interval
	cout << "Enter interval start point\n"; cin >> startPoint;
	cout << "Enter interval end point\n"; cin >> endPoint;

	for (int i = 0; i < N; i++) {

		if ((arr[i] >= startPoint)&&(arr[i] <= endPoint)) { // Determinating needed values

			arr[i] = 0;
			cout << arr[i];
		}
		else {

			cout << arr[i];

		}
	}
}