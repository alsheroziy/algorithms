// Insertion sort algorithm C++ implementation

#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr) {
		int n = arr.size();
		for (int i = 1; i < n; i++) {
				int key = arr[i];
				int j = i - 1;
				while (j >= 0 && arr[j] > key) {
						arr[j + 1] = arr[j];
						j--;
				}
				arr[j + 1] = key;
		}
}

int main() {
		vector<int> arr = {1, 121, 13, 45, 6};
		insertion_sort(arr);
		for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
		}
		return 0;
}

// Output: 1, 121, 13, 45, 6
// Time complexity: O(n^2)
// Space complexity: O(1)