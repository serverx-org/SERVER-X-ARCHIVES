# <span style="color:#1AED59"> Q. **V-Sorting**</span>

Akash is given an array of N elements, and he has to perform V-sort on the elements in ascending order.

**In V-sort:**

If the number of ones in X is greater than the number of ones in Y (binary representation), or
If the number of ones in X and Y are equal, and the number of zeros is less in X than Y (binary representation).

**In V-sort: X-Y**

If the number of ones in X and Y are equal, and the number of zeros is equal in X and Y (binary representation).
Write a program to print the V-sort of the given elements.

## <span style="color:cyan"> **Logic Approach** </span>

The logical approach for Linear search is as follows:

1. Read the size of the array and the elements of the array.
2. Count the number of zeroes and ones in each element.
3. Sort the elements according to the given conditions.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>
c

```c
// PROBLEM: V-Sorting
// Author: Geetika Nahak

#include <stdio.h>

void swapit(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], zero[n], one[n], i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        one[i] = 0;
        zero[i] = 0;
    }
    for (i = 0; i < n; i++) {
        int cur = a[i];
        while (cur != 0) {
            int k = cur % 2;
            if (k == 1)
                one[i]++;
            else
                zero[i]++;
            cur /= 2;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (one[i] > one[j]) {
                swapit(&one[i], &one[j]);
                swapit(&zero[i], &zero[j]);
                swapit(&a[j], &a[i]);

            } else if (one[i] == one[j] && zero[i] < zero[j]) {
                swapit(&one[i], &one[j]);
                swapit(&zero[i], &zero[j]);
                swapit(&a[j], &a[i]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
```
