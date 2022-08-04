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
vii arr;
void input()
{
    n = 2;
    cin >> m;
    arr.resize(n);
    arr[0].resize(0);
    arr[1].resize(0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll val;
            cin >> val;
            arr[i].push_back(val);
        }
    }
}
void sol()
{
    vii left(n, vi(m, 0));
    vii right(n, vi(m, 0));
    for (int i = 0; i < n; i++)
    {
        ll time = 0;
        for (int j = 0; j < m; j++)
        {
            if (!i and !j)
                continue;
            if (time <= arr[i][j])
                time = arr[i][j];
            time++;
            left[i][j] = time;
        }
    }

    for (int i = 0; i < n; i++)
    {
        ll time = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            if (!i and !j)
                continue;
            if (time <= arr[i][j])
                time = arr[i][j];
            time++;
            right[i][j] = time;
        }
    }
    for (auto li : left)
    {
        for (auto val : li)
        {
            cout << val << " ";
        }
        cout << en;
    }
    for (auto li : right)
    {
        for (auto val : li)
        {
            cout << val << " ";
        }
        cout << en;
    }
    ll ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll curr = 0;
            if (i == 0)
            {
                curr = right[i + 1][j];
                if (j != m - 1)
                    curr += left[i][j + 1];
            }
            else
            {
                curr = right[i - 1][j];
                if (j != m - 1)
                    curr += left[i][j + 1];
            }
            ans = min(ans, curr);
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