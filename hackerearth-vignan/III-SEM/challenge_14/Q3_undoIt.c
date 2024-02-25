#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input = (char *)malloc(10000001);
    if (input == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    scanf("%s", input);

    char *result = (char *)malloc(10000001);
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        free(input);
        return 1;
    }
    int len = strlen(input);
    int resultIndex = 0;

    for (int i = 0; i < len; i++) {
        if (input[i] == 'Z') {
            if (resultIndex > 0) {
                resultIndex--;
            }
        } else {
            result[resultIndex] = input[i];
            resultIndex++;
        }
    }

    result[resultIndex] = '\0';

    printf("%s\n", result);

    free(input);
    free(result);

    return 0;
}
