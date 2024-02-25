# <span style="color:#1AED69"> Q. **Dinesh and his number**</span>


## <span style="color:#ED7F1A"> **Logical Approach**</span>

* `removeDigits()` funtion 
1. Initialize an empty string `result` to store the final result.
2. Iterate over each character `digit` in the input number string.
3. While there are more characters to process and the current `digit` is smaller than the last character in `result`, remove the last character from `result`.
4. Append the current `digit` to `result`.
5. After processing all the digits, `result` contains the smallest possible number by removing larger digits when necessary.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
/* Pseudocode */
function removeDigits(number, k):
    result = create an empty string

    for each digit in number:
        while k is greater than 0 and result is not empty and the last digit in result is greater than the current digit:
            remove the last digit from result
            decrement k by 1
        append the current digit to result

    remove the last k digits from result by resizing the string

    return result

function main():
    read t from input

    repeat t times:
        read number and k from input

        result = removeDigits(number, k)

        smallestNumber = result

        print smallestNumber

    return 0

main()
```