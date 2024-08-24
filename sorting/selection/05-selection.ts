// Selection sort algorithm TypeScript implementation

export function selectionSort(arr: number[]): number[] {
	const n = arr.length;
	for (let i = 0; i < n - 1; i++) {
		let minIndex = i;
		for (let j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		const temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
	return arr;
}

// Time complexity: O(n^2)

// Test

const arr = [64, 34, 25, 12, 22, 11, 90];

console.log(selectionSort(arr)); // [ 11, 12, 22, 25, 34, 64, 90 ]