"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Decimal To Binary
 * Approach: Using bin() function
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    n = int(input())
    print(bin(n)[2:])
