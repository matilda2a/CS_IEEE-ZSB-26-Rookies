#include <stdio.h>

int main() {
    int H, A;
    scanf("%d %d", &H, &A);

    int attacks = (H + A - 1) / A;
    printf("%d\n", attacks);

    return 0;
}
