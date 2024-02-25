#include <bits/stdc++.h>
using namespace std;

int Bsearch(int *arr, int l, int h, int key) {
    if (l <= h) {
        int m = l + (h - l) / 2;
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