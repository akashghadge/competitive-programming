#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define endl "\n"
#define pb push_back
#define all(v) v.begin(), v.end()
#define mp make_pair
#define fi first
#define se second
#define vll vector<ll>
#define pll pair<ll, ll>
#define fo(i, n) for (int i = 0; i < n; i++)
#define fo1(i, n) for (int i = 1; i <= n; i++)
ll mod = 1000000007;
ll n, k, t, m, q, flag = 0;
ll power(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(all(s));
        string ans;
        fo(i, n) ans.pb('0');

        int flag = 0;

        fo(i, n / 2)
        {
            if (s[i] == s[i + n / 2])
                flag = 1;
            ans[i] = s[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            ans[i] = s[n - 1 + n / 2 - i];
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
}
