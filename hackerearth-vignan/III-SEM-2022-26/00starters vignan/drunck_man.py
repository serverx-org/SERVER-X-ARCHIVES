def drunk_man_position_at_second(N):
    steps_forward = N // 3 * 2
    if N % 3 == 1:
        steps_forward += 1
    return steps_forward

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    N = int(input())
    result = drunk_man_position_at_second(N)
    print(result)
