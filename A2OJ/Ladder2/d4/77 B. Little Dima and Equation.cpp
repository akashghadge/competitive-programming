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
ll sum_digit(ll x)
{
    ll ans = 0;
    while (x)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void sol(int a, int b, int c)
{
    int n = 81;
    vll ans;
    for (int i = 1; i <= n; i++)
    {
        long long res = b * binpow(i, a) + c;
        if (0 < res && res <= 1e9 && sum_digit(res) == i)
        {
            ans.push_back(res);
        }
    }
    cout << ans.size() << en;
    for (auto val : ans)
    {
        cout << val << " ";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int a, b, c;
    cin >> a >> b >> c;
    sol(a, b, c);
    return 0;
}