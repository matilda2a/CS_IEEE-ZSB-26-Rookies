#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int solved = 0;

    while (n--) {
        int p, v, t;
        scanf("%d %d %d", &p, &v, &t);

        int sure = p + v + t;
        if (sure >= 2)
            solved++;
    }

    printf("%d\n", solved);
    return 0;
}
