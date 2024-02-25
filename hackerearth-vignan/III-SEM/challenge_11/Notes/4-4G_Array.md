# <span style="color:#1AED69"> Q. **4G Array**</span>

## **Intution**

The idea here is to convert all the elements in the array to modulus 4. First, the sum of all the elements of the array should be divisible by 4. If not, this task is not possible.

## <span style="color:#ED7F1A"> **Logical Approach**</span>

1. Initialize an array called `modulus` with a size of 4 and set all its elements to 0.
2. Initialize a counter called `count` to keep track of the number of steps taken.
3. Traverse through the input array and calculate the modulus 4 of each element.
4. Increase the value of the corresponding index in the `modulus` array by 1.
5. Elements in `modulus[0]` are already divisible by 4, so they don't need to be paired with any other element.
6. Elements in `modulus[1]` and `modulus[3]` can be combined to form a number divisible by 4. Increment the `count` by the minimum value between `modulus[1]` and `modulus[3]`.
7. Every two elements in `modulus[2]` can be combined to obtain an element divisible by 4.
8. For the remaining elements, increase the value of `modulus[2]` by half of the minimum value between `modulus[1]` and `modulus[3]`.
9. Finally, increase the `count` by half of `modulus[2]`. We divide by two because every two elements are combined into one.
10. The final value of `count` represents the number of steps required to make all elements in the input array divisible by 4.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
/* Pseudocode */
function array4G(arr, n):
    count = 0
    modulus = array of size 4 initialized with 0
    sum = 0

    for i from 0 to n-1:
        mod = arr[i] % 4
        sum += mod
        increment modulus[mod] by 1

    if sum % 4 is not equal to 0:
        return -1
    else:
        if modulus[1] > modulus[3]:
            count += modulus[3]
        else:
            count += modulus[1]

        decrement modulus[1] by count
        decrement modulus[3] by count
        increment modulus[2] by modulus[1] divided by 2
        increment modulus[2] by modulus[3] divided by 2

        increment count by modulus[1] divided by 2
        increment count by modulus[3] divided by 2
        increment count by modulus[2] divided by 2

        return count

function main():
    read t from input

    repeat t times:
        read n from input
        create an array arr of size n

        for i from 0 to n-1:
            read arr[i] from input

        count = array4G(arr, n)
        print count

    return 0

main()
```
