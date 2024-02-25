#include <stdio.h>
#include <stdlib.h>

int main() {
    int *myList = NULL;
    int size = 0, element;

    printf("Enter elements (enter -1 to end):\n");

    while (scanf("%d", &element) == 1 && element != -1) {
        myList = realloc(myList, ++size * sizeof(int));
        if (!myList) {
            printf("Memory allocation failed. Exiting.\n");
            return 1;
        }
        myList[size - 1] = element;
    }

    printf("Elements in the list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myList[i]);
    }

    free(myList);

    return 0;
}
