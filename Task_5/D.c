#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b) {
    while (b) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    long long X;
    scanf("%lld", &X);

    long long bestA = 1, bestB = X;
    long long bestMax = X;

    for (long long d = 1; d * d <= X; d++) {
        if (X % d == 0) {
            long long a = d;
            long long b = X / d;

            if (gcd(a, b) == 1) {
                long long currentMax = (a > b) ? a : b;
                if (currentMax < bestMax) {
                    bestMax = currentMax;
                    bestA = a;
                    bestB = b;
                }
            }
        }
    }

    printf("%lld %lld\n", bestA, bestB);
    return 0;
}