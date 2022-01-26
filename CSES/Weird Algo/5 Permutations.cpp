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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << en;
    }
    else if (n <= 3)
    {
        cout << "NO SOLUTION" << en;
    }
    else if (n == 4)
    {
        cout << "2 4 1 3 " << en;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << en;
    }

    return 0;
}