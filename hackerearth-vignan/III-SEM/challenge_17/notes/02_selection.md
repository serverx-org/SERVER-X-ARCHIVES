# <span style="color:#1AED59"> Q. **Raju and his Students (Selection Sort/Bubble Sort)**</span>

Raju, along with his students, wants to determine the distance covered by them. Initially, there are N poles, all at an equal distance of one meter from each other. At each pole, there is a dumbbell with a weight (W, for yoN). Raju will select N students and place each of them at the poles, and each student will grasp a dumbbell. Two students can swap positions while holding their dumbbells with Raju's instructions. Now, Raju aims to sort all the dumbbells in ascending order of their weights.

## <span style="color:cyan"> **Logic Approach** </span>

Selection Sort is a straightforward sorting algorithm that operates by repeatedly selecting the minimum element from the unsorted part of the array and placing it at the beginning. The algorithm maintains two subarrays in a given array:

1. The subarray that is already sorted.
2. The remaining subarray, which is unsorted.

In each iteration of the selection sort, the minimum element from the unsorted subarray is selected and moved to the sorted subarray. When swapping elements during this process, the distance moved can be calculated.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```c
// PROBLEM: Raju and his Students (Selection Sort)
// Author: Geetika Nahak

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k = 0;
    for (i = 0; i < n - 1; i++) {
        int curr = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[curr])
                curr = j;
        }
        if (curr != i) {
            int temp = a[i];
            a[i] = a[curr];
            a[curr] = temp;
            k += 2 * (curr - i);
        }
    }
    printf("%d\n", k);
}
```
