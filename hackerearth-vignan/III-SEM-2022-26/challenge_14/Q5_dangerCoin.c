#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    char data;
    struct Stack *next;
};

typedef struct Stack Stack;

Stack *createStack() {
    return NULL;
}

int isEmpty(Stack *top) {
    return (top == NULL);
}

void push(Stack **top, char data) {
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

char pop(Stack **top) {
    if (isEmpty(*top)) {
        printf("Error: Stack is empty\n");
        exit(1);
    }
    Stack *temp = *top;
    char data = temp->data;
    *top = temp->next;
    free(temp);
    return data;
}

int main() {
    int N;
    scanf("%d", &N);

    char coins[N];
    scanf("%s", coins);

    Stack *healthStack = createStack();
    int health = 0;

    for (int i = 0; i < N; i++) {
        if (coins[i] == 'R') {

            while (!isEmpty(healthStack) && healthStack->data != 'B') {
                char lostCoin = pop(&healthStack);
                if (lostCoin == 'G') {
                    health -= 10;
                } else if (lostCoin == 'B') {
                    health += 5;
                }
            }
        } else {
            push(&healthStack, coins[i]);
            if (coins[i] == 'G') {
                health += 10;
            } else if (coins[i] == 'B') {
                health += 5;
            }
        }
    }
    printf("%d\n", health);
    return 0;
}
