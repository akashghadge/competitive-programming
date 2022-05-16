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
    arr.resize(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

bool valid(ll a, ll b, ll c)
{
    ll num = (b - a);
    ll dem = (c - b);
    if (num == 0 or dem == 0)
        return false;
    return ((num / dem) == 2 || (dem / num) == 2);
}
bool sol()
{
    sort(arr.begin(), arr.end());
    for (ll i = 1; i < n - 1; i++)
    {
        if (!valid(arr[i - 1], arr[i], arr[i + 1]))
        {
            return false;
        }
    }
    return true;
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
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}