# <span style="color:#1AED69"> Q. **OMG Stairs???**</span>

The code defines a function `printStairPattern` that takes an integer `n` and a vector `stairs` as input.

## <span style="color:#ED7F1A"> **Logical Approach**</span>

1. The function iterates from 0 to `n-1` using the variable `i`.
2. In each iteration, it creates a string `spaces` containing `i+i` spaces and prints it.
3. It then prints the element at index `i` in the `stairs` vector.
4. If `i` is not equal to `n-1`, it creates a string `stairSpaces` containing `i+i+1` spaces and prints it, followed by a vertical line (|).
5. After the loop, the function ends.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
/* Pseudocode */
function printStairPattern(n, stairs):
    for i from 0 to n-1:
        spaces = create a string with i+i spaces
        print spaces + stairs[i]

        if i is not equal to n-1:
            stairSpaces = create a string with i+i+1 spaces
            print stairSpaces + "|"

function main():
    read n from input

    create a vector stairs of size n

    for i from 0 to n-1:
        read stairs[i] from input

    call printStairPattern(n, stairs)

    return 0

main()

```