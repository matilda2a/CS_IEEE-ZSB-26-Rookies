#include <stdio.h>

int main() {
    int x, y;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int v;
            scanf("%d", &v);
            if (v == 1) {
                x = i;
                y = j;
            }
        }
    }

    int moves = abs(x - 3) + abs(y - 3);
    printf("%d", moves);

    return 0;
}
