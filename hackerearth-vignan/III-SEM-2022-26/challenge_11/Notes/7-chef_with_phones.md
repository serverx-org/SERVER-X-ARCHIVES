# <span style="color:#1AED69"> Q. **Chef with iphones**</span>


## **Intution**

### Logic Description

Based on the comparison of `cnt12` and `cnt48`, the code determines whether the count of 12 is equal, greater, or smaller than the count of 48. Depending on the result, it prints different statements. 

- If `cnt12` is equal to `cnt48`, it prints "equal", "iphone13", and "iphone14".
- If `cnt12` is greater than `cnt48`, it prints "iphone13".
- Otherwise, it prints "iphone14".


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