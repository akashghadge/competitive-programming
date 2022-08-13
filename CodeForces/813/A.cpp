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
ll n, k;
vi arr;
void input()
{
    cin >> n >> k;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{
    ll ans = 0;
    set<int> mp;
    for (ll i = 0; i < k; i++)
    {
        mp.insert(arr[i]);
    }
    for (int i = 1; i <= k; i++)
    {
        if (mp.find(i) == mp.end())
        {
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