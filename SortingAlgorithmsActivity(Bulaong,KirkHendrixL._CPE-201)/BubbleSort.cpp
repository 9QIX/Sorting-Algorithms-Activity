#include <iostream>
using namespace std;

// array printing function
void arrayPrint(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}

// bubble sort function [O(n^2)]
void bubbleSort(int array[], int size) {
    // accessing each element
    for (int j = 0; j < size; ++j) {
        // comparing adjacent elements
        for (int i = 0; i < size - j; ++i) {
            if (array[i] > array[i + 1]) {
                // swapping element
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// driver code
int main(){
    int arr[] = {2, 4, 6, 8, 9, 7, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Bubble Sort\n";
    // unsorted
    cout << "Unsorted Array: ";
    for (const int &i : arr) {
        cout << i << " ";
    }
    // sorted
    bubbleSort(arr, n);
    cout << "\nSorted Array: ";
    arrayPrint(arr, n);
    
    return 0;
}