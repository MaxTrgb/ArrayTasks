/*6. Replace all negative elements of the array with their squares and arrange the elements of the array in ascending order.*/

#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    const int N = 5;
    int arr[N], temp[N], ascendingOrder[N]; // Additional arrays to sort elements 

    cout << "Enter values for array:\n";

    // Loop where user enters values
    for (int i = 0; i < N; i++) { 

        cin >> arr[i];

        if (arr[i] < 0) { //Replace negative elements of the array with their squares

            arr[i] = arr[i] * arr[i];
        }
    }

    int k = 0; // New variable to sort positive numbers

    for (int i = 0; i < N; i++) { 

        if (arr[i] >= 0) {

            temp[k] = arr[i];
            k++;
        }
    }

    sort(temp, temp + k); // We sort the numbers in ascending order 

    cout << "Transformed Array: ";
    int j = 0;
    for (int i = 0; i < N; i++) {

        if (arr[i] < 0) {

            cout << arr[i] << " ";
        }
        else {

            ascendingOrder[i] = temp[j];
            cout << ascendingOrder[i] << " ";
            j++;
        }
    }
    cout << endl;
}