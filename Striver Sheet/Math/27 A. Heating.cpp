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
/*input sections*/
int n;
vpi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
}
void sol()
{
    for (int i = 0; i < n; i++)
    {
        vi ans(arr[i].first, 0);
        int curr = arr[i].second;
        int dist = curr / arr[i].first;
        for (int j = 0; j < ans.size(); j++)
        {
            ans[j] = dist;
        }
        int rem = curr % arr[i].first;
        for (int j = 0; j < rem; j++)
        {
            ans[j] += 1;
        }
        ll res = 0;
        for (auto val : ans)
        {
            res += pow(val, 2);
        }
        cout << res << en;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}