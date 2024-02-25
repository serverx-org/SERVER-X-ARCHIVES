MOD = 1000000007

def count_ways(N, memo):
    if N < 0:
        return 0
    if N == 0:
        return 1
    if memo[N] != -1:
        return memo[N]

    ways = (count_ways(N - 1, memo) + count_ways(N - 2, memo) + count_ways(N - 3, memo)) % MOD
    memo[N] = ways
    return ways

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        memo = [-1] * (N + 1)
        result = count_ways(N, memo)
        print(result)

if __name__ == "__main__":
    main()


# def Solution():
#     # logic implementation section
    
#     pass


# if __name__ == "__main__":
#     # Main Section
#     cases = int(input())
#     for t in range(cases):
#         Solution()