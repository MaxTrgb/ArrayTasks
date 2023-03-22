/*4. Transform the array - rearrange its elements in such a way that initially
all elements equal to zero were located, and then all the others.*/

#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int j=0, k=0;
	int arr[N], temp[N];

	cout << "\nEnter values for array:\n";

    // Input numbers to array
	for (int i = 0; i < N; i++) {

		cin >> j;

		arr[i] = j;
	}
    // Move zeros to the beginning
    for (int i = 0; i < N; i++) {

        if (arr[i] == 0) {

            temp[k++] = arr[i];
        }
    }

    // Move non-zeros to the end
    for (int i = 0; i < N; i++) {

        if (arr[i] != 0) {

            temp[k++] = arr[i];
        }
    }

    // Copy temp array back to original array
    for (int i = 0; i < N; i++) {

        arr[i] = temp[i];
    }

    // Display the transformed array
    cout << "\nTransformed Array: ";
    for (int i = 0; i < N; i++) {

        cout << arr[i] << " " << endl;
    }

}