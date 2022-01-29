#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(int n, int k)
{
    if (n == 1 && k == 1)
        cout << 1 << en;
    else if (k == 1)
    {
        cout << -1 << en;
    }
    else
    {
        int i = 1, j = n;
        int ptr = 1;
        while (ptr <= n)
        {
            if (k > 1)
            {
                cout << i << " ";
                i++;
                k--;
            }
            else
            {
                cout << j << " ";
                j--;
            }
            ptr++;
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