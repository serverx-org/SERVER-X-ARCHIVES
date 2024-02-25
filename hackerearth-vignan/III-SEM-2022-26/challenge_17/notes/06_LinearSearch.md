# <span style="color:#1AED59"> Q. **Linear Search**</span>

In an unsorted array of elements, search for a given key

## <span style="color:cyan"> **Logic Approach** </span>

The logical approach for Linear search is as follows:

1. Read the size of the array and the elements of the array.
2. Read the key to be searched.
3. Traverse the array from the first element to the last element.
4. If the current element matches the key, return the index of the element.
5. If the key is not found in the array, return -1.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```c
// PROBLEM: // PROBLEM:
// Author: Geetika Nahak

#include <stdio.h>

int LinearSearch(int *arr, int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main() {
    int test, i;
    int n, key;
    scanf("%d%d", &n, &key);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%s\n", (LinearSearch(a, n, key) == 1 ? "yes" : "no"));
    return 0;
}
```
