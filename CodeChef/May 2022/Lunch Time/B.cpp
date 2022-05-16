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
vi arr;
void input()
{
    cin >> n >> m;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
ll remainder(ll a, ll b)
{
    ll temp = a % b;
    if (temp < 0)
        temp += b;
    return temp;
}
void sol()
{
    ll max_val = INT_MIN;
    sort(arr.begin(), arr.end());
    for (ll i = 1; i < n; i++)
    {
        ll curr = arr[i] + arr[i - 1] + remainder(arr[i - 1] - arr[i], m);
        ll curr2 = arr[i] + arr[i - 1] + remainder(arr[i] - arr[i - 1], m);
        max_val = max(max_val, max(curr, curr2));
    }
    ll i = 0, j = n - 1;
    while (i < j)
    {
        ll curr = arr[i] + arr[j] + remainder(arr[i] - arr[j], m);
        ll curr2 = arr[i] + arr[j] + remainder(arr[j] - arr[i], m);
        max_val = max(max_val, max(curr, curr2));
        i++;
        j--;
    }
    cout << max_val << en;
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