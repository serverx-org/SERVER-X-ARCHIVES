#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct {
    int data;
    struct Node *maxData;
} MaxValue;

typedef struct {
    Node *front;
    Node *rear;
    MaxValue *maxValues;
    int maxTop;
} Queue;

Queue *createQueue() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    queue->maxValues = (MaxValue *)malloc(10000 * sizeof(MaxValue));
    queue->maxTop = -1;
    return queue;
}

void enqueue(Queue *queue, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        newNode->prev = queue->rear;
        queue->rear = newNode;
    }

    if (queue->maxTop == -1 || data >= queue->maxValues[queue->maxTop].data) {
        queue->maxValues[++queue->maxTop].data = data;
        queue->maxValues[queue->maxTop].maxData = newNode;
    }
}

int dequeue(Queue *queue) {
    if (queue->front == NULL) {
        return -1; // Error code
    }

    if (queue->front == queue->maxValues[queue->maxTop].maxData) {
        queue->maxTop--;
    }

    Node *temp = queue->front;
    queue->front = queue->front->next;

    if (queue->front != NULL) {
        queue->front->prev = NULL;
    } else {
        queue->rear = NULL;
    }

    free(temp);
    return 0; // Success
}

int printMax(Queue *queue) {
    if (queue->maxTop == -1) {
        return -2; // Error code
    } else {
        return queue->maxValues[queue->maxTop].data;
    }
}

int main() {
    int kk, max;
    scanf("%d", &kk);

    Queue *queue = createQueue();

    for (int i = 0; i < kk; i++) {
        int type, data;
        scanf("%d", &type);

        switch (type) {
        case 0:
            scanf("%d", &data);
            enqueue(queue, data);
            break;
        case 1:
            if (dequeue(queue) == -1) {
                printf("-1\n");
            }
            break;
        case 2:
            max = printMax(queue);
            if (max == -2) {
                printf("-2\n");
            } else {
                printf("%d\n", max);
            }
            break;
        }
    }

    while (queue->front != NULL) {
        dequeue(queue);
    }

    free(queue->maxValues);
    free(queue);

    return 0;
}
