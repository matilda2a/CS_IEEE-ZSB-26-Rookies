#include <stdio.h>

int main() {
    int X;
    double Y;

    scanf("%d %lf", &X, &Y);

    if (X % 5 == 0 && Y >= X + 0.50) {
        Y = Y - X - 0.50;
    }

    printf("%.2f\n", Y);

    return 0;
}
