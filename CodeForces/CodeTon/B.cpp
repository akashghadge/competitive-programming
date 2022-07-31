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
ll n, x;
vi arr;
void input()
{
    cin >> n >> x;
    arr.resize(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{
    ll mx = arr[0];
    ll mn = arr[0];
    int ans = 0;
    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
        if (abs(mn - mx) > 2 * x)
        {
            mx = mn = arr[i];
            ans++;
        }
    }
    cout << ans << en;
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
