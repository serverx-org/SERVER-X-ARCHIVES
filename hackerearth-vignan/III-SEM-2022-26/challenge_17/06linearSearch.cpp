#include <bits/stdc++.h>
using namespace std;

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