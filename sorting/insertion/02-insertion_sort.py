# Insertion sort algorithm Python implementation

def insertion_sort(arr):
		for i in range(1, len(arr)):
				key = arr[i]
				j = i - 1
				while j >= 0 and key < arr[j]:
						arr[j + 1] = arr[j]
						j -= 1
				arr[j + 1] = key

		return arr

# Driver code
arr = [12, 11, 1, 56, 3]
print(insertion_sort(arr)) # Output: [12, 11, 1, 56, 3]	