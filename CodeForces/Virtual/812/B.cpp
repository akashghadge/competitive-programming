#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, a[N], pref[N], suff[N];

int main() {
    int tc; cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        pref[1] = a[1];
        for (int i = 2; i <= n; i++)
            pref[i] = max(pref[i-1], a[i]);

        suff[n] = a[n];
        for (int i = n - 1; i >= 1; i--)
            suff[i] = max(suff[i+1], a[i]);

        bool ok = true;
        for (int i = 2; i <= n - 1; i++) {
            if (pref[i-1] > a[i] && a[i] < suff[i+1]) {
                ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
