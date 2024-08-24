// Insertion sort algorithm TypeScript implementation

function insertionSort(arr: number[]): number[] {
	for (let i = 1; i < arr.length; i++) {
		let j = i - 1;
		let temp = arr[i];
		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	return arr;
}

// test the insertionSort function
const arr = [5, 2, 4, 6, 1, 3];
console.log(insertionSort(arr)); // [1, 2, 3, 4, 5, 6]

// Time complexity: O(n^2)
// Space complexity: O(1)