#include <stdio.h>

int main() {
    char word1[50];  // Assuming a maximum word length of 49 characters
    char word2[50];

    printf("Enter the first word: ");
    fgets(word1, sizeof(word1), stdin);

    printf("Enter the second word: ");
    fgets(word2, sizeof(word2), stdin);

    printf("You entered: %s and %s\n", word1, word2);

    return 0;
}
