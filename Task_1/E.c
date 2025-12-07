#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    char s[] = "codeforces";

    while (t--) {
        char c;
        scanf(" %c", &c);  

        int found = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == c) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
