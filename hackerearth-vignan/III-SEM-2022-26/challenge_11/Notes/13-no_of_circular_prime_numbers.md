# <span style="color:#1AED69"> Q. **No. of circular prime numbers**</span>

A `circular prime` is a prime number with the property that the number generated at each intermediate step when cyclically permuting its (base 10) digits will be prime. For example, `1193` is a circular prime, since `1931`, `9311` and `3119` all are also prime.

## <span style="color:#ED7F1A"> **Logical Approach**</span>

1. The `isPrime` function checks if a number is prime by iterating from 2 to the square root of the number, checking for any divisors.
2. For each number, it checks if it is prime and converts it to a string.
3. It then iterates through all possible rotations of the number and checks if each rotation is prime.
4. If all rotations are prime, it increments the counter.
5. After the loop, it prints the final count of numbers satisfying the conditions.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
/* Pseudocode */
function isPrime(num):
    if num is less than 2:
        return false
    for i from 2 to the square root of num:
        if num is divisible by i:
            return false
    return true

function main():
    read start and end from input
    count = 0

    for num from start to end:
        if num is prime:
            numStr = convert num to a string
            allRotationsPrime = true

            for i from 0 to the length of numStr:
                rotationStr = concatenate numStr starting from index i with numStr starting from index 0 up to index i
                rotation = convert rotationStr to an integer

                if rotation is not prime:
                    allRotationsPrime = false
                    break

            if allRotationsPrime is true:
                increment count by 1

    print count

    return 0

main()
```