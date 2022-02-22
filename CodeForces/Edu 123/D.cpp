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

int sol()
{
    int n, m;
    cin >> n >> m;
    vi row(n, 0);
    vi col(m, 0);
    int k, q;
    cin >> k >> q;
    for (int i = 0; i < q; i++)
    {
        int r, c;
        cin >> r >> c;
        row[r - 1] = i;
        col[c - 1] = i;
    }
    int diff = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[row[i]]++;
    for (int i = 0; i < m; i++)
        mp[col[i]]++;
    diff = mp.size();
    int mod = 998244353;
    if (k == 1)
        cout << 1 << en;
    else
        cout << ((diff % mod) * (k % mod)) % mod << en;
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
        sol();
    }
    return 0;
}