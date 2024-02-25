"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Pair Dragons
 * Approach: Using max pairs
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    n = int(input(0))
    l = list(map(int, input().split()))
    l.sort()
    res = ()
    mxHead = -1
    for i in range(n - 1):
        p = l[i] * l[i + 1]
        if p > mxHead:
            mxHead = p
            res = (l[i], l[i + 1])
    print(*res if mxHead != -1 else -1)
