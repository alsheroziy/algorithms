// Merge sort algorithm C++ implementation

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two subarrays

void merge(vector<int> &arr, int low, int mid, int high) {
	int n1 = mid - low + 1;
	int n2 = high - mid;

	// Create temp arrays
	vector<int> L(n1), R(n2);

	// Copy data to temp arrays L[] and R[]
	for (int i = 0; i < n1; i++) {
		L[i] = arr[low + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = arr[mid + 1 + j];
	}

	// Merge the temp arrays back into arr[low..high]
	int i = 0; // Initial index of first subarray
	int j = 0; // Initial index of second subarray
	int k = low; // Initial index of merged subarray

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if there are any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if there are any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Function to perform merge sort

void mergeSort(vector<int> &arr, int low, int high) {
	if (low < high) {
		// Find the middle point
		int mid = low + (high - low) / 2;

		// Sort first and second halves
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);

		// Merge the sorted halves
		merge(arr, low, mid, high);
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

	mergeSort(arr, 0, n - 1);

	cout << "Sorted array is \n";
	printArray(arr);

	return 0;
}

// Output
// Given array is
// 64 25 12 22 11
// Sorted array is
// 11 12 22 25 64