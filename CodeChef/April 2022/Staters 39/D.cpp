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
void sol()
{
    if (n == 1)
    {
        cout << 0 << en;
    }
    else if (n % 2 != 0)
    {
        cout << 1 << en;
    }
    else
    {
        ll ans = 0;
        for (ll i = 2; i < sqrt(n) && n != 1; i++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0 && n % (i * i) == 0)
                {
                    ll curr = i * i;
                    while (n % curr == 0)
                    {
                        curr *= i * i;
                    }
                    curr /= (i * i);
                    n /= curr;
                }
                else if (i % 2 != 0 && n % i == 0)
                {
                    ll curr = i;
                    while (n % curr == 0)
                    {
                        curr *= i;
                    }
                    curr /= i;
                    n /= curr;
                }
            }
            else if (n == 1)
            {
                cout << ans << en;
                return;
            }
            else if (n % 2 != 0)
            {
                ans++;
                cout << ans << en;
                return;
            }
            ans++;
        }
        if (n == 1)
        {
            cout << ans << en;
            return;
        }
        else
        {
            cout << -1 << en;
        }
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