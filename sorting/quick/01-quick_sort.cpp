// Quick sort algorithm C++ implementation

#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array using the last element as the pivot

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform quick sort

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    cout << "Given array is \n";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array is \n";
    printArray(arr);

    return 0;
}

// Output
// Given array is
// 64 25 12 22 11