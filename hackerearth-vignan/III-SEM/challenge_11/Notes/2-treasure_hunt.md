# <span style="color:#1AED69"> Q. **Treasure Hunt**</span>


## **Intution**
You are given a treasure map with as matrix and have to find wheather the Karthikeya can reach to the treasure or not so you are give a `matrix` which represents the map. The path starts ate `(0, 0)` and ends at `(n-1, n-1)`

### <span style="color:#1AEDE0"> Example: </span>
```py
0 0 0
1 1 0
1 1 0
```

<sup>starts -></sup> <span style="color:#1AED69">0</span> 1 0 <br>
&nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span style="color:#1AED69">0</span> <span style="color:#1AED69">0</span> <span style="color:#1AED69">0</span> <br>
&nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1 1 <span style="color:#1AED69">0</span><sup> <- ends</sup> <br>

here Karthikeya can go up, down, left, right, but cant go on the way where 1 it present in the map so our task is to check wheather Karthikeya can reach to Treasure or not with `YES` and `NO`.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
function validPath(matrix, i, j):
    n = size of matrix
    if i < 0 or i >= n or j < 0 or j >= n or matrix[i][j] != 0:
        return false
    matrix[i][j] = -1

    if i == n - 1 and j == n - 1:
        return true

    return validPath(matrix, i - 1, j) or
           validPath(matrix, i + 1, j) or
           validPath(matrix, i, j - 1) or
           validPath(matrix, i, j + 1)

function canReachTreasure(matrix): // return [true] otherwise [false]
    return isValidPath(matrix, 0, 0)
```
> With `canReachTreasure` function we can find `"YES"` or `"NO"` to the Question above using simple `if-else` statement