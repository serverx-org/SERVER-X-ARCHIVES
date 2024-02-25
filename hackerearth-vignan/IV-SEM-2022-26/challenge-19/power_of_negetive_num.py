"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Power of Negative Numbers 
 * Approach: Using count of duplicates
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    cnt = sum(1 for i in l if i < 0)
    sumCnt = sum(i for i in l if i < 0)
    print(cnt, sumCnt)
