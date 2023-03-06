#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000005
#define int long long
#define PII pair<int, int>
int p, n, m, k, a[MAXN], b[MAXN];
void solve()
{
    cin >> n;
    if (n % 4 == 2 || n % 4 == 3)
    {
        cout << -1;
        return;
    }
    for (int i = 1; i <= (n + 1) / 2; i += 2)
    {
        if (i * 2 == n + 1)
            a[i] = i;
        else
        {
            int j = i + 1;
            a[i] = j;
            a[j] = n - i + 1;
            a[n - i + 1] = n - j + 1;
            a[n - j + 1] = i;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    p = 1;
    while (p--)
        solve();
}
