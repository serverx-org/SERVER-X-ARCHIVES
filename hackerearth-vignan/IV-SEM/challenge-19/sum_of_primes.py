"""
 * Vignan Challenge 19 | FEB 25
 * Problem: Sum of Primes
 * Approach: Using Sieve of Eratosthenes algorithm
 * Author: Gautam Ankoji
"""

def sieve(n):
    primes = [True]*(n+1)
    primes[0], primes[1] = False, False
    num = 2
    while(num**2 <= n):
        if primes[num]:
            for i in range(num**2, n+1, num):
                primes[i] = False
        num += 1
        return [i for i in range(n+1) if primes[i]]

for _ in range(int(input())):
    r1, r2 = map(int, input().split())
    primes = sieve(r2)
    res = sum(prime for prime in primes if r1 <= prime <= r2)
    print(res)
