"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Find Number
 * Approach: Using unicode subtraction
 * Author: Gautam Ankoji
"""

for _ in range(int(input())):
    c = input()
    print(ord(c.upper()) - ord('A') + 1)
