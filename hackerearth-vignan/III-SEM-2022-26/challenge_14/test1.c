#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Enter a string: ");
    scanf("%s", input);

    int result = 0;
    int currentSum = 0;
    int inParenthesis = 0;
    char modifiedString[2000];
    int modifiedIndex = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '(') {
            inParenthesis = 1;
        } else if (input[i] == ')') {
            inParenthesis = 0;
            result += currentSum;
            currentSum = 0;
        } else if (inParenthesis) {
            if (input[i] >= '0' && input[i] <= '9') {
                currentSum += input[i] - '0';
            }
        }

        modifiedString[modifiedIndex++] = input[i];
    }

    // Add any remaining currentSum to the result
    result += currentSum;

    // Add the result to the modified string
    modifiedIndex += sprintf(modifiedString + modifiedIndex, "%d", result);

    printf("Modified String: %s\n", modifiedString);

    return 0;
}
