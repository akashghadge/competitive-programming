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
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[i * i]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int req = (i * i) + (j * j);
            if (mp.find(req) != mp.end())
                ans++;
        }
    }
    cout << ans << en;

    return 0;
}