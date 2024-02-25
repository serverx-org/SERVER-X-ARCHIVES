#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int data;
        scanf("%d", &data);
        int cnt = 0;
        int temp = data;
        while (temp > 0) {
            temp /= 2;
            cnt++;
        }
        int *binTree = (int *)malloc(cnt * sizeof(int));
        int i = 0;
        while (data > 0) {
            binTree[i++] = data % 2;
            data /= 2;
        }
        for (int k = i - 2; k >= 0; k--) {
            printf("%c", (binTree[k] == 0) ? 'L' : 'R');
        }
        printf("\n");
        free(binTree);
    }
    return 0;
}
