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
int sol(v<pii> arr, int n)
{
    int totalTime = (24 * 60) + 1;
    vi dp(totalTime, 0);
    for (int i = 0; i < n; i++)
    {
        int curr_time = (arr[i].first * 60) + arr[i].second;
        dp[curr_time]++;
    }
    return *max_element(dp.begin(), dp.end());
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    v<pii> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << sol(arr, n) << en;

    return 0;
}