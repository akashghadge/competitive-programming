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
/*input sections*/
int w, x, y, z;
void input()
{
    cin >> w >> x >> y >> z;
}
void sol()
{
    int initial = w;
    int max_cap = x;
    int rate = y;
    int hour = z;
    int curr = w + (y * z);
    if (curr == x)
    {
        cout << "filled" << en;
    }
    else if (curr > x)
    {
        cout << "overFlow" << en;
    }
    else
    {
        cout << "Unfilled" << en;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}