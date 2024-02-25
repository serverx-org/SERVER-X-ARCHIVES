# <span style="color:#1AED69"> Q. **Get the String**</span>


## **Intution**

## Logical Approach

1. Calculate the maximum number of steps `steps` that can be taken from the current character `c` to reach the next character in alphabetical order, considering the remaining value of `k` and the distance to the end of the alphabet: `steps = min(k, 26 - (c - 'a'))`.
2. Update the character `c` to the next character in alphabetical order by calling the `getNextCharacter` function with `c` and `steps` as parameters: `c = getNextCharacter(c, steps)`.
3. Subtract the number of steps taken `steps` from `k`: `k -= steps`.
4. Check if `k` has become zero. If so, break the loop since no more steps are available: `if (k == 0) { break; }`.

These logical steps ensure that each character is updated based on the available steps and the distance to the next character in alphabetical order, while `k` is decreased accordingly. This process continues until `k` becomes zero or all characters have been processed, resulting in a rearranged string in dictionary order.



## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
function main():
    read t from input

    repeat t times:
        read n from input

        arr = create a new vector of size n

        for i from 0 to n-1:
            read arr[i] from input

        cnt12 = count the number of occurrences of 12 in arr
        cnt48 = count the number of occurrences of 48 in arr

        if cnt12 is equal to cnt48:
            print "equal"
            print "iphone13"
            print "iphone14"
        else if cnt12 is greater than cnt48:
            print "iphone13"
        else:
            print "iphone14"

    return 0

main()
```