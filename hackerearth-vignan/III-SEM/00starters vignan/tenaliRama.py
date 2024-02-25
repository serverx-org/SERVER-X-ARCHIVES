def nearest_number_in_geometric_sequence(n):
    nearest = 1
    while nearest * 2 <= n:
        nearest *= 2
    return nearest

# Example usage:
x = 20
n = x*x
result = nearest_number_in_geometric_sequence(n)
print(result)  # Output: 32
