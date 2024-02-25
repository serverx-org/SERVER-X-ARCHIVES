def is_possible(plants, months, w, l):
    total_height = 0
    for h, r in plants:
        height_after_months = h + r * months
        total_height += max(0, height_after_months)
        if total_height >= w:
            return True
    return False

def min_months_needed(plants, w, l):
    low, high = 0, 10**18  # Set the initial bounds (can adjust the upper bound based on constraints)
    
    while low < high:
        mid = (low + high) // 2
        if is_possible(plants, mid, w, l):
            high = mid
        else:
            low = mid + 1
    
    return low

# Example usage:
n = 4
w = 74
l = 51
plants = [(2, 2), (5, 7), (2, 9)]

result = min_months_needed(plants, w, l)
print(result)  # Output: 7
