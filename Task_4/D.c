#include <stdio.h>
#include <string.h>

long long comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    char s1[15], s2[15];
    scanf("%s", s1);
    scanf("%s", s2);

    int target = 0, cur = 0, q = 0;
    int n = strlen(s1);

    for (int i = 0; i < n; i++) {
        if (s1[i] == '+') target++;
        else target--;
    }

    for (int i = 0; i < n; i++) {
        if (s2[i] == '+') cur++;
        else if (s2[i] == '-') cur--;
        else q++;
    }

    int diff = target - cur;

    if ((diff + q) % 2 != 0 || diff > q || diff < -q) {
        printf("0.000000000000\n");
        return 0;
    }

    int k = (diff + q) / 2;
    double probability = (double)comb(q, k) / (1LL << q);

    printf("%.12f\n", probability);

    return 0;
}