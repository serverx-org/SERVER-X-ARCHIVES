# <span style="color:#1AED69"> Q. **College Canteen**</span>


## **Intution**
Given;
```cpp
m -> money
c -> cost of 1 chocolate
k -> wrappers(replacing k wrappers to store rewards 1 chocolate) 
```

### <span style="color:#1AEDE0"> Example: </span>
```cpp
Input : m=15 c=1 k=3
```
With m money student will be getting `m/c` chocolates i.e., 15/1 = 15 chocolates
and with each k wrappers student collects and in exchange he gets `wraps = (wraps / k) + (wraps % k)` wrappers i.e., `5 + 0` again he eats and gives back wrappers and gets `5/3` chocolates that is `2` and now since `2 < k(3)` he can't get any more chocolates

## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
function calculateChocolates(t):
    for each test case in range t:
        read m, c, k from input

        choco = m / c
        wraps = choco

        while wraps >= k:
            choco += wraps / k
            wraps = (wraps / k) + (wraps % k)

        print choco

function main():
    read t from input
    calculateChocolates(t)

main()
