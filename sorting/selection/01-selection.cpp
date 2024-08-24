// Selection sort algorithm C++ implementation

#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
		int temp = a;
		a = b;
		b = temp;
}

// Function to perform selection sort
void selectionSort(vector<int> &arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[minIndex], arr[i]);
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
	selectionSort(arr);
	cout << "Sorted array: \n";
	printArray(arr);
	return 0;
}

// Output
// Sorted array:
// 11 12 22 25 64

