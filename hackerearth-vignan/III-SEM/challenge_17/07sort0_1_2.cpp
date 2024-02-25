#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int c1 = 0, c2 = 0, c3 = 0;
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        switch (a[i]) {
        case 0:
            c1++;
            break;
        case 1:
            c2++;
            break;
        case 2:
            c3++;
            break;
        }
    }
    i = 0;
    while (c1 > 0) {
        a[i++] = 0;
        c1--;
    }
    while (c2 > 0) {
        a[i++] = 1;
        c2--;
    }
    while (c3 > 0) {
        a[i++] = 2;
        c3--;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}