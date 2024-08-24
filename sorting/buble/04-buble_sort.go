// Buble sort algorithm Go implementation

package main

import "fmt"

func bubleSort(arr []int) []int {
	n := len(arr)
	for i := 0; i < n; i++ {
		for j := 0; j < n-i-1; j++ {
			if arr[j] > arr[j+1] {
				// swap
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	return arr
}

func main() {
	arr := []int{64, 34, 25, 12, 22, 11, 90}
	fmt.Println("Unsorted array: ", arr)
	fmt.Println("Sorted array: ", bubleSort(arr))
}

/*
Unsorted array:  [64 34 25 12 22 11 90]
Sorted array:  [11 12 22 25 34 64 90]
*/