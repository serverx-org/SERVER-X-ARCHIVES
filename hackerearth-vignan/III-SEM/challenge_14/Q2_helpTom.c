#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123(45)";
    char extractedDigits[100];
    int extractedDigitsIndex = 0;
    bool insideParentheses = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            insideParentheses = true;
        } else if (str[i] == ')') {
            insideParentheses = false;
        } else if (insideParentheses) {
            if (str[i] >= '0' && str[i] <= '9') {
                extractedDigits[extractedDigitsIndex] = str[i];
                extractedDigitsIndex++;
            }
        }
    }
    extractedDigits[extractedDigitsIndex] = '\0';

    char modifiedString[100];
    int modifiedStringIndex = 0;
    insideParentheses = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            insideParentheses = true;
        } else if (str[i] == ')') {
            insideParentheses = false;
        } else if (!insideParentheses) {
            modifiedString[modifiedStringIndex] = str[i];
            modifiedStringIndex++;
        }
    }
    modifiedString[modifiedStringIndex] = '\0';

    printf("Extracted Digits: %s\n", extractedDigits);
    printf("Modified String: %s\n", modifiedString);

    return 0;
}
