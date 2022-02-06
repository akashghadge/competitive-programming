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
    if (k == 1)
    {
        cout << "YES" << en;
        for (int i = 1, j = 1; i <= n * k; i += 2, j++)
        {
            cout << i << " ";
            if (k == j)
            {
                cout << en;
                j = 0;
            }
        }
        for (int i = 2, j = 1; i <= n * k; i += 2, j++)
        {
            cout << i << " ";
            if (k == j)
            {
                cout << en;
                j = 0;
            }
        }
    }
    else if (n % 2 == 0)
    {
        cout << "YES" << en;
        
        for (int i = 1, j = 1; i <= n * k; i += 2, j++)
        {
            cout << i << " ";
            if (k == j)
            {
                cout << en;
                j = 0;
            }
        }
        for (int i = 2, j = 1; i <= n * k; i += 2, j++)
        {
            cout << i << " ";
            if (k == j)
            {
                cout << en;
                j = 0;
            }
        }
    }
    else
    {
        cout << "NO" << en;
    }
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