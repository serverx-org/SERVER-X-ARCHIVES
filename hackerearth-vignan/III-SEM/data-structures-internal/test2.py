def heapify(arr, n, i):
    largest = i
    left_child, right_child = 2 * i + 1, 2 * i + 2

    largest = left_child if left_child < n and arr[left_child] > arr[largest] else largest
    largest = right_child if right_child < n and arr[right_child] > arr[largest] else largest

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)

def row_wise_max_elements(arr):
    n, start_idx = len(arr), (len(arr) // 2) - 1

    for i in range(start_idx, -1, -1):
        heapify(arr, n, i)

    result, level_size = [], 1
    while level_size <= n:
        result.append(max(arr[level_size - 1: min(2 * level_size - 1, n)]))
        level_size *= 2

    return result

# Example
input_list = list(map(int, input().split()))
max_heap = row_wise_max_elements(input_list)
print("\n".join(map(str, max_heap)))
