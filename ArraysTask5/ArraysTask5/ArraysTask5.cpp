/*5. Convert the array - rearrange its elements so that in the first half of it
elements standing in odd positions were placed, and in the second half - elements,
that stood in even positions.*/

#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int j = 0, k = 0;
    int arr[N], temp[N];

    cout << "\nEnter values for array:\n";

    // Input numbers to array
    for (int i = 0; i < N; i++) {

        cin >> j;

        arr[i] = j;
    }
    // Move even to the beginning
    for (int i = 0; i < N; i++) {

        if (arr[i] % 2 == 0) {

            temp[k++] = arr[i];
        }
    }

    // Move odd to the end
    for (int i = 0; i < N; i++) {

        if (arr[i] % 2 != 0) {

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