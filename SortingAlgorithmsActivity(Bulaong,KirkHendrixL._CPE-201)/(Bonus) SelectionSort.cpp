#include <iostream>
using namespace std;

// array printing function
void arrayPrint(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

// selection sort function [O(n^2)]
void selectionSort (int arr[], int n){
    int i, j;
    for (i = 0; i < n; ++i){
        for (j = i+1; j < n; ++j){
            // comparing consecutive data and switching values
            if (arr[i] > arr[j]){
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
    }
}

// driver code
int main(){
    int arr[] = {2, 4, 6, 8, 9, 7, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Selection Sort\n";
    // unsorted
    cout << "Unsorted Array: ";
    for (const int &i : arr) {
        cout << i << " ";
    }
    // sorted
    selectionSort(arr, n);
    cout << "\nSorted Array: ";
    arrayPrint(arr, n);

    return 0;
}

