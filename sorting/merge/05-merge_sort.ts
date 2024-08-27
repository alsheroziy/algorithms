// Merge sort algorithm TypeScript implementation


function merge(left: number[], right: number[]): number[] {
	let result: number[] = [];
	let leftIndex: number = 0;
	let rightIndex: number = 0;

	while (leftIndex < left.length && rightIndex < right.length) {
		if (left[leftIndex] < right[rightIndex]) {
			result.push(left[leftIndex]);
			leftIndex++;
		} else {
			result.push(right[rightIndex]);
			rightIndex++;
		}
	}

	return result.concat(left.slice(leftIndex)).concat(right.slice(rightIndex));
}

// Merge sort function

function mergeSort(arr: number[]): number[] {
	if (arr.length <= 1) {
		return arr;
	}

	let middle: number = Math.floor(arr.length / 2);
	let left: number[] = arr.slice(0, middle);
	let right: number[] = arr.slice(middle);

	return merge(mergeSort(left), mergeSort(right));
}

// Example usage
const arr: number[] = [5, 3, 8, 6, 2, 7, 1, 4];
const sortedArr: number[] = mergeSort(arr);
console.log(sortedArr); // Output: [1, 2, 3, 4, 5, 6, 7, 8]


