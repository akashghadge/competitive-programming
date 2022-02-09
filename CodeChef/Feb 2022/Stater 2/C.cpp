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
int sol(vpi arr, int n)
{
    unordered_map<int, int> x;
    unordered_map<int, int> y;
    for (auto p : arr)
    {
        x[p.first]++;
        y[p.second]++;
    }
    return (x.size() + y.size());
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
        int n;
        cin >> n;
        vpi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }
        cout << sol(arr, n) << en;
    }
    return 0;
}