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
/*global*/
bool perfect_squre(int n)
{
    return (ceil((double)sqrt(n)) == floor((double)sqrt(n)));
}
int sol()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        return 0;
    else if (x == 0 || y == 0)
        return 1;
    else if (perfect_squre(pow(x, 2) + pow(y, 2)))
        return 1;
    else
        return 2;
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
        cout << sol() << en;
    }
    return 0;
}