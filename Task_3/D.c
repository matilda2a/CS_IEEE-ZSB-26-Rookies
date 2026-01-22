#include <stdio.h>

int main() {
    long long N;
    int K;
    int count = 0;

    scanf("%lld %d", &N, &K);

    while (N > 0) {
        N /= K;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
