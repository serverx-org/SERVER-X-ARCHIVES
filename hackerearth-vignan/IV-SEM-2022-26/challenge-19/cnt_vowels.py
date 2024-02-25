"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Count Vowels
 * Approach: Using vowels string
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    s = input()
    v = 'aeiouAEIOU'
    res = sum(1 for c in s if c in v)
    print(res)
