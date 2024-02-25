#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_INCREMENT 100

int *stack = NULL;
int top = -1;
int max_size = 0;

void push(int element) {
    if (top >= max_size - 1) {
        max_size += STACK_INCREMENT;
        stack = (int *)realloc(stack, max_size * sizeof(int));
    }
    stack[++top] = element;
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}

int main() {
    char input[10000];
    int n;

    scanf("%s %d", input, &n);

    int len = strlen(input);

    stack = (int *)malloc(STACK_INCREMENT * sizeof(int));
    max_size = STACK_INCREMENT;

    for (int i = 0; i < len; i++) {
        int digit = input[i] - '0';
        while (n > 0 && top >= 0 && digit < stack[top]) {
            pop();
            n--;
        }
        push(digit);
    }

    while (n > 0 && top >= 0) {
        pop();
        n--;
    }

    char output[top + 2];
    for (int i = 0; i <= top; i++) {
        output[i] = stack[i] + '0';
    }
    output[top + 1] = '\0';

    int result = atoi(output);

    printf("%d\n", result);

    free(stack);

    return 0;
}
