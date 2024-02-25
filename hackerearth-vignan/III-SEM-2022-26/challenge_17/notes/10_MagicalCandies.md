# <span style="color:#1AED59"> Q. **Magical Candies**</span>

There is a magical candy box in which it gives some random number of candies every day. But after N days its magical power will be lost So you can collect some random number of candles everyday for N days. </br>
Now you will be asked Q queries. In each query you have to answer number of days it took to collect M number of candies.

## <span style="color:cyan"> **Logic Approach** </span>

The logical approach for Linear search is as follows:

1. Read the value of N, the number of days the magical candy box will give candies.
2. Read the value of M, the number of candies to be collected.
3. Calculate the total number of candies collected over N days by summing up the random number of candies given each day.
4. If the total number of candies collected is less than M, add the last element of the candies array and repeat until the number of candies collected is less than M.
5. Print the total number of days taken to collect M candies.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```c
// PROBLEM: Magical Candies
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
