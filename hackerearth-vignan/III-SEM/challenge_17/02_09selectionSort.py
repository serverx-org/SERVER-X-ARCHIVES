def bubble_sort_optimized(arr):
    n = len(arr)
    k = 0
    for i in range(n - 1):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                k += 1
                swapped = True
        # If no swaps were made in an iteration, the array is already sorted
        if not swapped:
            break
    return k

# Input
n = int(input())
arr = list(map(int, input().split()))

# Sorting and counting swaps
swaps = bubble_sort_optimized(arr)

# Output
print(swaps)
