// Buble sort algorithm JS implementation

function buble_sort(arr) {
	let swapped;
	do {
		swapped = false;
		for (let i = 0; i < arr.length - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				let temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
	return arr;
}

// Usage
let arr = [5, 3, 8, 4, 2];
console.log(buble_sort(arr)); // [2, 3, 4, 5, 8]