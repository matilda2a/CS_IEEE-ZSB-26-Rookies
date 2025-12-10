#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[105];
    scanf("%s", s);

    int seen[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        seen[c - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
