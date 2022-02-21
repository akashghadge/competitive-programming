#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(int n, int k)
{
    if (k == n - 1)
    {
        cout << "2 1 ";
        for (int i = 3; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << en;
        return;
    }
    for (int i = 1; i <= k; i++)
    {
        cout << i << " ";
    }
    if ((n - k) % 2 == 0)
    {
        int j = k + 1;
        int i = k + 2;
        while (i <= n && j <= n)
        {
            cout << i << " " << j << " ";
            i += 2;
            j += 2;
        }
    }
    else
    {
        int j = k + 1;
        int i = k + 2;
        while (i <= n - 3 && j <= n - 3)
        {
            cout << i << " " << j << " ";
            i += 2;
            j += 2;
        }

        cout << n - 1 << " " << n << " " << n - 2;
    }
    cout << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        sol(n, k);
    }
    return 0;
}