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
int sol(vector<pair<int, int>> arr, int n)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i].first);
        mx = max(mx, arr[i].second);
    }
    for (int i = 0; i < n; i++)
    {
        if (mn == arr[i].first && mx == arr[i].second)
            return i + 1;
    }
    return -1;
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
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    cout << sol(arr, n) << en;

    return 0;
}