#include <bits/stdc++.h>
using namespace std;
const int inf = 1000000000;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector<int> cnt_a(n + 1), cnt_b(n + 1);

        for (int i = n - 1; i >= 0; i--)
        {
            cnt_a[i] = cnt_a[i + 1] + (a[i] == '0');
            cnt_b[i] = cnt_b[i + 1] + (b[i] == '0');
        }

        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                dp[i][j] = inf;

        dp[n][n] = 0;

        for (int i = n; i >= 0; i--)
        {
            for (int j = n; j >= 0; j--)
            {
                if (i < n)
                {
                    if (a[i] == '0')
                        dp[i][j] = min(dp[i][j], dp[i + 1][j]);
                    else
                        dp[i][j] = min(dp[i][j], dp[i + 1][j] + cnt_a[i] + cnt_b[j]);
                }

                if (j < n)
                {
                    if (b[j] == '0')
                        dp[i][j] = min(dp[i][j], dp[i][j + 1]);
                    else
                        dp[i][j] = min(dp[i][j], dp[i][j + 1] + cnt_a[i] + cnt_b[j]);
                }
            }
        }

        cout << dp[0][0] << endl;
    }

    return 0;