def count_ways(n):
    dp = [0] * (n + 1)

    dp[0] = 1
    dp[1] = 1
    dp[2] = 2

    for i in range(3, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]

    return dp[n]


t = int(input())


for _ in range(t):
    n = int(input())
    dp = [0] * (n + 1)
    dp[0] = 1
    dp[1] = 1
    dp[2] = 2
    for i in range(3, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]
    res = dp[n]
    print(res)
    # print(ways)

    # n = int(input())
    # dp = [1, 1, 2] + [0] * (n - 2)
    # for i in range(3, n + 1):
    #     dp[i % 3] = dp[(i - 1) % 3] + dp[(i - 2) % 3] + dp[(i - 3) % 3]
    # res = dp[n % 3]
    # print(res)