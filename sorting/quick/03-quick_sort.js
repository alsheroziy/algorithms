// Quick sort algorithm Javascript implementation

function quickSort(arr) {
	if (arr.length <= 1) {
		return arr
	}

	const pivot = arr[0]
	const left = []
	const right = []

	for (let i = 1; i < arr.length; i++) {
		if (arr[i] < pivot) {
			left.push(arr[i])
		} else {
			right.push(arr[i])
		}
	}

	return quickSort(left).concat(pivot, quickSort(right))
}

// Usage

const arr = [5, 3, 7, 6, 2, 9]
const sortedArr = quickSort(arr)

console.log(sortedArr) // [2, 3, 5, 6, 7, 9]
