#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(vi arr, int n)
{
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (i == arr[i])
        {
            ans++;
        }
        mp[arr[i]] = i;
    }
    if (ans == n)
        return ans;
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i] && arr[arr[i]] == i)
        {
            return ans + 2;
        }
    }
    return ans + 1;
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
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N) << en;
    return 0;
}