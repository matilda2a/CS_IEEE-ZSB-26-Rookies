#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    char s1[20], s2[20];

    for (int i = 0; i < b; i++) {
        s1[i] = a + '0';
    }
    s1[b] = '\0';

    for (int i = 0; i < a; i++) {
        s2[i] = b + '0';
    }
    s2[a] = '\0';

    if (strcmp(s1, s2) <= 0) {
        printf("%s\n", s1);
    } else {
        printf("%s\n", s2);
    }
    return 0;
}