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
    int ans = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr -= arr[i].first;
        curr += arr[i].second;
        ans = max(curr, ans);
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
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << sol(arr, N) << en;
    return 0;
}