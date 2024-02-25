#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[1001];
        scanf("%s", s);

        int count[26] = {0};
        int visited[26] = {0};
        char stack[1001];
        int top = -1;

        for (int i = 0; s[i]; i++) {
            count[s[i] - 'a']++;
        }

        for (int i = 0; s[i]; i++) {
            count[s[i] - 'a']--;

            if (visited[s[i] - 'a']) {
                continue;
            }

            while (top >= 0 && s[i] < stack[top] && count[stack[top] - 'a'] > 0) {
                visited[stack[top] - 'a'] = 0;
                top--;
            }

            stack[++top] = s[i];
            visited[s[i] - 'a'] = 1;
        }

        stack[top + 1] = '\0';

        printf("%s\n", stack);
    }

    return 0;
}
