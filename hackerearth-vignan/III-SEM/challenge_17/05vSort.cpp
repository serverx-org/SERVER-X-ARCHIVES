#include <bits/stdc++.h>
using namespace std;

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