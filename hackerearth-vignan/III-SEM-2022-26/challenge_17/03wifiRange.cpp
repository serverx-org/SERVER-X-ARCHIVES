#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        long long r = (x1 * x1) + (y1 * y1);
        long long d = (x2 * x2) + (y2 * y2);
        if (r >= d)
            printf("IN RANGE\n");
        else
            printf("NOT IN RANGE\n");
    }
}