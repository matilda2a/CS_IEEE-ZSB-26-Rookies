#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    long long total = 0;
    for (long long x : p) total += x;

    long long ans = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += p[i];
            }
        }
        ans = min(ans, llabs(total - 2 * sum));
    }

    cout << ans << endl;
    return 0;
}