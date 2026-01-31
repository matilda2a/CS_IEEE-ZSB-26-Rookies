#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long a = -1, b = -1, c = -1;
        long long temp = n;

        for (long long i = 2; i * i <= temp; i++) {
            if (temp % i == 0) {
                a = i;
                temp /= i;
                break;
            }
        }

        if (a == -1) {
            printf("NO\n");
            continue;
        }

        for (long long i = a + 1; i * i <= temp; i++) {
            if (temp % i == 0) {
                b = i;
                temp /= i;
                break;
            }
        }

        c = temp;

        if (b == -1 || c < 2 || c == a || c == b) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("%lld %lld %lld\n", a, b, c);
        }
    }
    return 0;
}