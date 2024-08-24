// Buble sort algorithm C++ implementation

#include <iostream>
#include <vector>
using namespace std;

void buble_sort(vector<int> &arr) {
		int n = arr.size();
		for (int i = 0; i < n; i++) {
				for (int j = 0; j < n - i - 1; j++) {
						if (arr[j] > arr[j + 1]) {
								swap(arr[j], arr[j + 1]);
						}
				}
		}
}

int main() {
		vector<int> arr = {5, 2, 3, 1, 4};
		buble_sort(arr);
		for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
		}
		cout << endl;
		return 0;
}
