def find_max_power_pair(dragon_powers):
    sorted_powers = sorted(dragon_powers)
    max_pair = max(((a, b) for a, b in zip(sorted_powers, sorted_powers[1:])), key=lambda x: x[0] * x[1])
    return max_pair

# Example usage:
dragon_powers = list(map(int, input("Enter the powers of dragons separated by spaces: ").split()))
max_pair = find_max_power_pair(dragon_powers)
print("Pair of dragons with maximum power:", max_pair)
