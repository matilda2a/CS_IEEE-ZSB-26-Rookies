#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int size = 2 * n + 1;
    int r[205], y[205];

    for (int i = 0; i < size; i++) {
        scanf("%d", &r[i]);
        y[i] = r[i];
    }

    for (int i = 1; i < 2 * n && k > 0; i += 2) {
        if (y[i] > y[i - 1] && y[i] > y[i + 1]) {
            if (y[i] - 1 > y[i - 1] && y[i] - 1 > y[i + 1]) {
                y[i]--;
                k--;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", y[i]);
    }

    return 0;
}
