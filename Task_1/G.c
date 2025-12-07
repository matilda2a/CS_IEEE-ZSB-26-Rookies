#include <stdio.h>
int main() {
    int k, r;
    scanf("%d %d", &k, &r);

    int n = 1;
    while (1) {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r) {
            printf("%d\n", n);
            break;
        }
        n++;
    }

    return 0;
}
