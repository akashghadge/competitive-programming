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
void solve()
{
    int n;
    string str;
    cin >> n >> str;
    int c = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
            c++;
        else
            d++;
    }
    if (c == d)
    {
        cout << n << en;
    }
    else
    {
        cout << min(c, d) + min(c, d) + 1 << en;
    }
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
        solve();
    }
    return 0;
}