#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int ones_i = countSetBits(arr[i]);
            int ones_j = countSetBits(arr[j]);
            int zeros_i = __builtin_popcount(~arr[i] & ((1 << 31) - 1));
            int zeros_j = __builtin_popcount(~arr[j] & ((1 << 31) - 1));

            if (ones_i > ones_j || (ones_i == ones_j && zeros_i < zeros_j)) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
