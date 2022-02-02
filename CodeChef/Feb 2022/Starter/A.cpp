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
int sol(int x, int y)
{
    int total = x;
    int chick = y;
    int normal = total - chick;
    if (normal == 0)
    {
        return (2 * chick) - 1;
    }
    else if (chick == 0)
    {
        return normal;
    }
    else
    {
        return (chick * 2) + normal;
    }
    return -1;
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
        int x, y;
        cin >> x >> y;
        cout << sol(x, y) << en;
    }
    return 0;
}