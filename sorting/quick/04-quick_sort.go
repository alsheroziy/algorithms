// Quick sort algorithm Go implementation

package main

import (
	"fmt"
)

func quickSort(arr []int) []int {
	if len(arr) < 2 {
		return arr
	}

	pivot := arr[0]
	var less []int
	var greater []int

	for _, v := range arr[1:] {
		if v <= pivot {
			less = append(less, v)
		} else {
			greater = append(greater, v)
		}
	}

	return append(append(quickSort(less), pivot), quickSort(greater)...)
}

func main() {
	arr := []int{4, 2, 5, 1, 3}
	fmt.Println("Before sorting: ", arr)
	fmt.Println("After sorting: ", quickSort(arr))
}

// Output
// Before sorting:  [4 2 5 1 3]
// After sorting:  [1 2 3 4 5]