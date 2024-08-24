// Buble sort algorithm TypeScript implementation

export function bubleSort(arr: number[]): number[] {
	const n = arr.length;
	for (let i = 0; i < n - 1; i++) {
		for (let j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				const temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

// Time complexity: O(n^2)

// Test

const arr = [64, 34, 25, 12, 22, 11, 90];

console.log(bubleSort(arr)); // [ 11, 12, 22, 25, 34, 64, 90 ]
