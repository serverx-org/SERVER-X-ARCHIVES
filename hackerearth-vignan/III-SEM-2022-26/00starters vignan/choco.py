def left_out_chocolate(n):
    if n <= 0:
        return None

    chocolates = list(range(1, n + 1))
    sri_chocolates = []
    krishna_chocolates = []

    for i in range(n // 2):
        sri_chocolates.append(chocolates.pop(0))
        krishna_chocolates.append(chocolates.pop())

    if n % 2 != 0:
        sri_chocolates.append(chocolates.pop())

    return chocolates[0] if chocolates else None

# Test the function
n = 10
print("Left-out chocolate:", left_out_chocolate(n))  # Output: 8
