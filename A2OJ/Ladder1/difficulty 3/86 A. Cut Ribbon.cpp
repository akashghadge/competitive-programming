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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    vi nums(3);
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    vi dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (auto cut : nums)
        {
            if (i - cut >= 0 && dp[i - cut] != -1)
            {
                dp[i] = max(dp[i], dp[i - cut] + 1);
            }
        }
    }
    cout << dp[n] << en;

    return 0;
}