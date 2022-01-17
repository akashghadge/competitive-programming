#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<ll>
#define vii vector<vector<ll>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
ll sumToN(ll n)
{
    return (n * (n + 1)) / 2;
}
ll sol(vi sec, vi hel, ll n)
{
    ll ans = 0;
    ans = sumToN(hel[0]);
    vll lastNum(n, 0);
    lastNum[0] = hel[0];
    for (ll i = 1; i < n; i++)
    {
        ll diff = sec[i] - sec[i - 1];
        ll fact = 0;
        if (diff >= hel[i])
        {
            ans += sumToN(hel[i]);
            lastNum[i] = hel[i];
        }
        else
        {
            ans += sumToN(lastNum[i - 1] + diff) - sumToN(lastNum[i - 1]);
            lastNum[i] = lastNum[i - 1] + diff;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vi sec(n, 0);
        vi hel(n, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> sec[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> hel[i];
        }
        cout << sol(sec, hel, n) << en;
    }

    return 0;
}