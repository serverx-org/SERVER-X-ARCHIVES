import math

def is_in_range(x1, y1, x2, y2):
    distance = math.sqrt((x2 - 0)**2 + (y2 - 0)**2)
    if distance <= math.sqrt(x1**2 + y1**2):
        return 'IN RANGE'
    else:
        return 'NOT IN RANGE'

# Input reading
T = int(input())

for _ in range(T):
    # Read Wi-Fi's maximum range position
    x1, y1 = map(int, input().split())

    # Read Eswar's position
    x2, y2 = map(int, input().split())

    # Check if Eswar is in Wi-Fi range and print the result
    result = is_in_range(x1, y1, x2, y2)
    print(result)
