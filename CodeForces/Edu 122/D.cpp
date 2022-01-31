#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int knapSack(int capicity, vi weight, vi price, int n)
{
    // Your code here
    vector<vector<int>> dp(n + 1, vector<int>(capicity + 1));
    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[0].size(); j++)
        {
            if (j >= weight[i - 1])
            {
                int rem_weight = j - weight[i - 1];
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][rem_weight] + price[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][capicity];
}
int sol(vi b, vi c, int n, int k)
{
    vi weights = {0, 4, 3, 1};
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            weights[i] = 0;
        }
        else
        {
        }
    }

    return knapSack(k, weights, c, n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vi b(n);
        vi c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        cout << sol(b, c, n, k) << en;
    }
    return 0;
}