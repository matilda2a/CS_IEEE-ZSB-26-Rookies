#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int MAXX = 1e6;
    vector<int> divisors(MAXX + 1, 0);

    for (int i = 1; i <= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            divisors[j]++;
        }
    }
    while (n--) {
        int x;
        cin >> x;
        cout << divisors[x] << '\n';
    }
    return 0;
}