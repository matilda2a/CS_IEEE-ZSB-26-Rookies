#include <stdio.h>
#include <string.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int n;
        char s[25], t[25];
        scanf("%d", &n);
        scanf("%s %s", s, t);

        int cntS[26] = {0}, cntT[26] = {0};

        for (int i = 0; i < n; i++) {
            cntS[s[i] - 'a']++;
            cntT[t[i] - 'a']++;
        }

        int ok = 1;
        for (int i = 0; i < 26; i++) {
            if (cntS[i] != cntT[i]) {
                ok = 0;
                break;
            }
        }

        printf(ok ? "YES\n" : "NO\n");
    }

    return 0;
}
