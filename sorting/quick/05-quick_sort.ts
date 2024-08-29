// Quick sort algorithm TypeScript implementation

function quickSort(arr: number[], low: number, high: number): number[] {
	if (low < high) {
		const pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}

	return arr;
}

function partition(arr: number[], low: number, high: number): number {
	const pivot = arr[high];
	let i = low - 1;

	for (let j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			[arr[i], arr[j]] = [arr[j], arr[i]];
		}
	}

	[arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];

	return i + 1;
}

// Example usage

const arr = [64, 34, 25, 12, 22, 11, 90];
const sortedArr = quickSort(arr, 0, arr.length - 1);

console.log('Sorted array:', sortedArr);

// Output: Sorted array: [ 11, 12, 22, 25, 34, 64, 90 ]
