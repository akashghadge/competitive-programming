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
void input()
{
    cin >> n;
}
ll lcm_num(ll n1, ll n2)
{
    ll max;
    max = (n1 > n2) ? n1 : n2;
    while (true)
    {
        if (max % n1 == 0 && max % n2 == 0)
            return max;
        max++;
    }
}

void sol()
{
    // for (ll i = n; i > 0; i--)
    // {
    //     cout << i << " ";
    // }
    // cout << en;
    // vi arr(n);
    // for (ll i = 0; i < n; i++)
    // {
    //     arr[i] = i + 1;
    // }
    // ll mx = 0;
    // do
    // {
    //     ll sum = 0;
    //     for (ll i = 0; i < n; i++)
    //     {
    //         sum += lcm_num(i + 1, arr[i]);
    //     }
    //     for (auto val : arr)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << sum << en;
    //     mx = max(mx, sum);
    // } while (next_permutation(arr.begin(), arr.end()));
    // cout << " sum " << mx << en;
    if (n == 1)
    {
        cout << "1" << en;
    }
    else if (n == 2)
    {
        cout << "2 1" << en;
    }
    else if (n % 2 == 0)
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << en;
    }
    else
    {
        cout << "1 3 2 ";
        for (ll i = 4; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << en;
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
        sol();
    }
    return 0;
}