def sum_absolute_differences(arr):
    # Dictionary to store first and last occurrences of each integer
    first_occurrence = {}
    last_occurrence = {}
    for i, num in enumerate(arr):
        if num not in first_occurrence:
            first_occurrence[num] = i
        last_occurrence[num] = i

    # Calculate absolute differences and sum them up
    total_sum = 0
    for num, first_index in first_occurrence.items():
        last_index = last_occurrence[num]
        total_sum += abs(last_index - first_index)

    return total_sum

# Example usage:
# arr = [1, 2, 1, 3, 2, 4, 1]
arr = [1, 2, 3, 3, 2]
print("Sum of absolute differences:", sum_absolute_differences(arr))
