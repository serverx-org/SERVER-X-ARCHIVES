#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] != ' ' && str[j + 1] != ' ' && str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    char *words[100], *token = strtok(str, " ");
    int count = 0;

    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    char out[100] = "";
    for (int i = count - 1; i > 0; i--) {
        strcat(out, words[i]);
        strcat(out, " ");
    }
    strcat(out, words[0]);
    strcpy(str, out);
    printf("%s", str);

    return 0;
}
