#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<ll>
#define vll vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
ll n, m;
string str;
void input()
{
    cin >> n >> m >> str;
}
ll sol()
{
    ll zero = 0;
    for (auto ch : str)
        if (ch == '0')
            zero++;
    if (zero == n)
        return n * m;
    if (m == 1)
    {
        vector<ll> pre(n + 1, 0);
        vector<ll> suf(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            if (str[i - 1] == '1')
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1];
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                suf[i] = suf[i + 1] + 1;
            else
                suf[i] = suf[i + 1];
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (pre[i] == suf[i])
                ans++;
        }
        return ans;
    }
    else if (m % 2 == 0)
    {
        vector<ll> pre((n * 2) + 1, 0);
        vector<ll> suf((n * 2) + 1, 0);
        str += str;
        for (ll i = 1; i <= n * 2; i++)
        {
            if (str[i - 1] == '1')
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1];
        }
        for (ll i = (n * 2) - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                suf[i] = suf[i + 1] + 1;
            else
                suf[i] = suf[i + 1];
        }
        ll ans = 0;
        for (ll i = 1; i <= n * 2; i++)
        {
            if (pre[i] == suf[i])
                ans++;
        }
        return ans;
    }
    else
    {
        vector<ll> pre((n * 3) + 1, 0);
        vector<ll> suf((n * 3) + 1, 0);
        str = str + str + str;
        // cout << str << en;
        for (ll i = 1; i <= n * 3; i++)
        {
            if (str[i - 1] == '1')
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1];
        }
        for (ll i = (n * 3) - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                suf[i] = suf[i + 1] + 1;
            else
                suf[i] = suf[i + 1];
        }
        ll ans = 0;
        // for (auto val : pre)
        //     cout << val << " ";
        // cout << en;
        // for (auto val : suf)
        //     cout << val << " ";
        // cout << en;
        for (ll i = 1; i <= n * 3; i++)
        {
            if (pre[i] == suf[i])
                ans++;
        }
        return ans;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T = 1;
    cin >> T;
    while (T--)
    {
        input();
        cout << sol() << en;
    }
    return 0;
}