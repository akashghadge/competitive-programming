#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 1e+9 + 7;

void MAIN()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = max(pre[i - 1], v[i]);
    int i, k;
    while (q--)
    {
        cin >> i >> k;
        if (pre[i] == v[i])
        {
            if (v[i] == n)
            {
                if (i > 2)
                {
                    cout << max(k - (i - 2), 0) << '\n';
                }
                else
                    cout << k << '\n';
            }
            else
            {
                int pos = upper_bound(pre.begin() + 1, pre.end(), v[i]) - pre.begin();
                if (i > 2)
                {
                    if (i - 2 >= k)
                    {
                        cout << 0 << '\n';
                    }
                    else
                    {
                        k -= (i - 2);
                        cout << min(1 + pos - i - 1, k) << '\n';
                    }
                }
                else
                {
                    cout << min(i - 1 + pos - i - 1, k) << '\n';
                }
            }
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    cout << setprecision(10);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        MAIN();
}
