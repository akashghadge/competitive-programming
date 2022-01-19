#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
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
        int N;
        cin >> N;
        string str1, str2;
        cin >> str1 >> str2;
        vii dp(N + 1, vi(N + 1, 0));
        for (int i = N - 1; i >= 0; i--)
        {
            for (int j = N - 1; j >= 0; j--)
            {
                if (str1[i] == str2[j] && str1[i] == '1')
                {
                    dp[i][j] = dp[i + 1][j + 1] * 2;
                }
                else if (str1[i] == str2[j] && str1[i] == '0')
                {
                    dp[i][j] = dp[i + 1][j + 1];
                }
                else if (str1[i] == '0' && str2[j] == '1')
                {
                    dp[i][j] = dp[i + 1][j + 1] + 1;
                }
                else if (str1[i] == '1' && str2[j] == '0')
                {
                    dp[i][j] = dp[i + 1][j + 1] + 1;
                }
            }
        }
        cout << dp[0][0] << en;
    }

    return 0;
}