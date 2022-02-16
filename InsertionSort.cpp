#include <iostream>
using namespace std;

// array printing function
void arrayPrint(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}

// insertion sort function [O(n)]
void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        // Comparing elements
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

// driver code
int main(){
    int arr[] = {2, 4, 6, 8, 9, 7, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Insertion Sort\n";
    // unsorted
    cout << "Unsorted Array: ";
    for (const int &i : arr) {
        cout << i << " ";
    }
    // sorted
    insertionSort(arr, n);
    cout << "\nSorted Array: ";
    arrayPrint(arr, n);
    
    return 0;
}