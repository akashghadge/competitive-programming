
// Tester: Nikhil_Medam
#include <bits/stdc++.h>
#pragma GCC optimize("-O3")
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define int long long
#define double long double
const int N = 1e5 + 5;

int t, n, x, a[N], dp[N][2];
int xorValue(int x, int y)
{
    return x ^ y;
}
int32_t main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i <= n; i++)
        {
            dp[i][0] = max(xorValue(a[i], a[i - 1]) + dp[i - 1][0], xorValue(a[i], a[i - 1] + x) + dp[i - 1][1]);
            dp[i][1] = max(xorValue(a[i] + x, a[i - 1]) + dp[i - 1][0], xorValue(a[i] + x, a[i - 1] + x) + dp[i - 1][1]);
        }
        cout << max(dp[n][0], dp[n][1]) << endl;
    }
    return 0;
}