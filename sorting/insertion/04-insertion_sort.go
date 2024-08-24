// Insertion sort algorithm Go implementation

package main

import "fmt"

func insertionSort(arr []int) []int {
	for i := 1; i < len(arr); i++ {
		key := arr[i]
		j := i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = key
	}

	return arr
}

func main() {
	arr := []int{12, 11, 13, 5, 6}
	fmt.Println("Unsorted array is: ", arr)
	fmt.Println("Sorted array is: ", insertionSort(arr))
}

/*
Unsorted array is:  [12 11 13 5 6]
Sorted array is:  [5 6 11 12 13]
*/