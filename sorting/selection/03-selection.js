// Selection sort algorithm JavaScript implementation

function selectionSort(arr) {
	const len = arr.length;
	let minIndex, temp;

	for (let i = 0; i < len; i++) {
		minIndex = i;

		for (let j = i + 1; j < len; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	return arr;
}

// Usage
const arr = [64, 34, 25, 12, 22, 11, 90];
console.log(selectionSort(arr)); // [11, 12, 22, 25, 34, 64, 90]