for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    cnt = 0
    if m == 0:
        print(n - 1)
    else:
        cnt = n - 1
        for i in a:
            if i % 2 == 0:
                cnt += 6
            else:
                cnt += 3
        print(cnt)


# # method 2
# for _ in range(int(input())):
#     KPN, KPK = map(int, input().split())
#     KPL = list(map(int, input().split()))
#     KPS = set(KPL) if KPK != 0 else set()
#     KPT = sum((3 if i & 1 else 6 ) if i in KPS else 0 for i in range(KPN - 1)) + KPN - 1
#     print(KPT)
