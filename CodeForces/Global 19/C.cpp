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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, l = 0;
    cin >> n;
    vll p(n + 5), d(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        d[i] = p[i];
    }

    if (n == 3)
    {
        if (p[1] % 2 == 1)
            cout << -1 << endl;
        else
            cout << p[1] / 2 << en;
    }

    return 0;
}