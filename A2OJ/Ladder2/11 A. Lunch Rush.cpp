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
int sol(v<pii> arr, int k)
{
    int ans = INT_MIN;
    for (auto val : arr)
    {
        if (val.second > k)
        {
            ans = max(ans, val.first - (val.second - k));
        }
        else
        {
            ans = max(ans, val.first);
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, k;
    cin >> n >> k;
    v<pii> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << sol(arr, k) << en;
    return 0;
}