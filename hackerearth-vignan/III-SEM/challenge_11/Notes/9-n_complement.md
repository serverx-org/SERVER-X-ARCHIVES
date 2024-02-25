# <span style="color:#1AED69"> Q. **Complementing number**</span>


## **Intution**

## Logical Approach

The code implements the `findComplement` function, which calculates the bitwise complement of a given integer `num`. The logical approach can be described as follows:

1. Initialize a mask variable to 1.
2. Enter a loop that continues until the mask becomes greater than the input number `num`.
3. Within the loop, update the mask by shifting it one bit to the left (`mask = (mask << 1) + 1`), effectively setting all bits to 1.
4. After the loop, calculate the bitwise complement of the input number `num` by performing the XOR operation between `num` and the mask: `num ^ mask`.
5. Return the resulting complement.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
function findComplement(num):
    mask = 1

    while mask < num:
        mask = (mask << 1) + 1

    return num bitwise XOR mask

function main():
    read n from input

    complement = findComplement(n)
    print complement

    return 0

main()
```