// Selection sort algorithm Go implementation

package main

import "fmt"

func selectionSort(arr []int) []int {
	n := len(arr)
	for i := 0; i < n; i++ {
		minIndex := i
		for j := i + 1; j < n; j++ {
			if arr[j] < arr[minIndex] {
				minIndex = j
			}
		}
		// swap
		arr[i], arr[minIndex] = arr[minIndex], arr[i]
	}
	return arr
}

func main() {
	arr := []int{64, 34, 25, 12, 22, 11, 90}
	fmt.Println("Unsorted array: ", arr)
	fmt.Println("Sorted array: ", selectionSort(arr))
}

/*
Unsorted array:  [64 34 25 12 22 11 90]
Sorted array:  [11 12 22 25 34 64 90]
*/