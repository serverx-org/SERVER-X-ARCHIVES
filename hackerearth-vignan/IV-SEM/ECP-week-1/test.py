from collections import defaultdict

def sum_absolute_differences(arr):
    occurrences = defaultdict(list)
    for i, num in enumerate(arr):
        occurrences[num].append(i)
    
    return sum(max(indices) - min(indices) for indices in occurrences.values())

# Example usage:
# arr = [1, 2, 1, 3, 2, 4, 1]
# print("Sum of absolute differences:", sum_absolute_differences(arr))

arr = [1, 2, 3, 3, 2]
print("Sum of absolute differences:", sum_absolute_differences(arr))
