#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    int n = strlen(s);
    int isAllUpper = 1;
    int isCapsAccident = 1;

    for (int i = 0; i < n; i++) {
        if (!isupper(s[i])) {
            isAllUpper = 0;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            isCapsAccident = 0;
            break;
        }
    }

    if (isAllUpper || isCapsAccident) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;
}