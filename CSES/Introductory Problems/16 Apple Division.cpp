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
ll n;
vi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void help(vi arr, ll ptr, ll n, ll sum1, ll sum2, ll *ans)
{
    if (ptr == n)
    {
        *ans = min(*ans, abs(sum1 - sum2));
        return;
    }
    help(arr, ptr + 1, n, sum1 + arr[ptr], sum2, ans);
    help(arr, ptr + 1, n, sum1, sum2 + arr[ptr], ans);
}
void sol()
{
    ll ans = INT_MAX;
    help(arr, 0, n, 0, 0, &ans);
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
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}