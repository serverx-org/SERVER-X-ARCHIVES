"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Max Score in Row
 * Approach: Using max in list method
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    r, c = map(int, input().split())
    mat = [list(map(int, input().split())) for i in range(r)]
    print(*[max(mxRow) for mxRow in mat])
