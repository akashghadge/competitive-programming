#include <bits/stdc++.h>
using namespace std;
#define loop(i, j, k) for (int i = (int)j; i < (int)k; i++)
#define forno(i, j) for (int i = 1; i < (int)j; i += (int)k)
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
const int INF = 1e18 + 7;
const int N = 200000 + 10;
const int M = 1e9 + 7;
int M2 = 1e10 + 13;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    string a, b;
    a = s;
    b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool pos = true;
    if (a != b)
        pos = false;
    else
    {
        int need = 2 * k - n;
        if (need > 0)
        {
            if (need % 2)
            {
                int mid = n / 2;
                need--;
                need /= 2;
                int l, r;
                l = mid - need;
                r = mid + need;
                l = max(l, (int)0);
                r = min(n - 1, r);
                for (int i = l; i <= r; i++)
                {
                    if (s[i] != t[i])
                        pos = false;
                }
                // cout << l << " " << r << "\n";
            }
            else
            {
                int mid = n / 2;
                int l = mid - (need) / 2;
                int r = mid + (need) / 2 - 1;
                l = max(l, (int)0);
                r = min(n - 1, r);
                for (int i = l; i <= r; i++)
                {
                    if (s[i] != t[i])
                        pos = false;
                }

                // cout << l << " " << r << "\n";
            }
        }
    }

    if (!pos)
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main()
{
    // precalc();
    fastio;
    int t;
    cin >> t;
    // t=1;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}
