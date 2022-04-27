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
vi a;
vi b;
vi c;
int k1, k2;
void input()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    cin >> k1 >> k2;
}
void help(int rm1, int rm2, int curr, ll sum, ll *ans)
{
    if (curr >= n)
    {
        if (rm1 >= 0 && rm2 >= 0)
        {
            *ans = max(*ans, sum);
        }
        return;
    }
    help(rm1 - 1, rm2, curr + 1, sum + a[curr], ans);
    help(rm1, rm2 - 1, curr + 1, sum + b[curr], ans);
    help(rm1, rm2, curr + 1, sum + c[curr], ans);
}
void sol()
{
    ll ans = INT_MIN;
    vector<vector<vector<int>>> dp(n, vii(n, vi(n, -1)));
    help(k1, k2, 0, 0, &ans);
    cout << ans << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}