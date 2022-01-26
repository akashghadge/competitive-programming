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
    n -= 10;
    if (n <= 0)
    {
        cout << 0 << en;
    }
    else if (1 <= n or n <= 9 or n == 1)
    {
        cout << 4 << en;
    }
    else if (n == 10)
    {
        cout << 15 << en;
    }
    else
    {
        cout << 0 << en;
    }
    return 0;
}