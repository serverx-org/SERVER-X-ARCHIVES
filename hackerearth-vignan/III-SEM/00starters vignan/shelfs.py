def Solution():
    # logic implementation section
    n, targ = map(int, input().split())
    space = targ
    arr = list(map(int, input().split()))
    # l = sorted(arr, reverse = True)
    cnt = 0
    for i in reversed(arr):
        if i < targ and i < space:
            targ -= i;
            cnt += 1
    print(cnt)
    return 0


if __name__ == "__main__":
    # Main Section
    cases = int(input())
    for t in range(cases):
        Solution()