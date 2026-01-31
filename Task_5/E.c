#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n % 2 != 0) {
            printf("0\n");
        } else {
            printf("%d\n", (n / 4) + 1);
        }
    }

    return 0;
}
