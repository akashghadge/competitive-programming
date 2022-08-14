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
ll x;
void input()
{
    cin >> x;
}
ll res(ll a, ll b)
{
    return 2 * a + 2 * b + a * b;
}
void sol()
{

    for (ll i = 1; i < 100000; i++)
    {
        ll lo = 1;
        ll hi = 100000;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (res(i, mid) == x)
            {
                cout << "Yes" << en;
                return;
            }
            else if (res(i, mid) < x)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    cout << "No" << en;
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
        sol();
    }
    return 0;
}