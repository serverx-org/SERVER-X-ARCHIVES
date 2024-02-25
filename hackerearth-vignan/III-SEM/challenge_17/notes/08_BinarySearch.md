# <span style="color:#1AED59"> Q. **Binary Search**</span>

In a sorted array of elements search for a given key. </br>
Implement `binary search` or else you'll get time limit exceeded!!!

## <span style="color:cyan"> **Logic Approach** </span>

The logical approach for binary search is as follows:

1. Compare the target element to the middle element of the array
2. If the target element is greater than the middle element, continue searching the right half
3. If the target element is less than the middle value, continue searching in the left half
4. If thr key is found at the middle element, terminate the process
5. It the key is not found at the middle element, choose which half will be used ad the next search space
6. Repeat the process until the target is found

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```c
// PROBLEM: Binary Search 
// Author: Geetika Nahak

#include <stdio.h>

int Bsearch(int *arr, int l, int h, int key) {
    if (l <= h) {
        int m = (l + h) / 2;
        if (arr[m] == key)
            return 1;
        else if (arr[m] < key)
            return Bsearch(arr, m + 1, h, key);
        else if (arr[m] > key)
            return Bsearch(arr, l, m - 1, key);
    }
    return 0;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int b[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int test;
    scanf("%d", &test);
    while (test--) {
        int key;
        scanf("%d", &key);
        printf("%d\n", Bsearch(b, 0, n, key));
    }
    return 0;
}
```
