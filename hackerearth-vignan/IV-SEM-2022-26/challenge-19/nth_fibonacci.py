"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Nth Fibonacci
 * Approach: Using fibonacci formula
 * Author: Gautam Ankoji
"""

def nthFib(n):
    if n <= 1:
        return n
    return nthFib(n - 1) + nthFib(n - 2)

for _ in range(int(input())):
    n = int(input())
    print(nthFib(n))
