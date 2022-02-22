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
bool sol(string str)
{
    int r = 0, b = 0, g = 0;
    for (auto ch : str)
    {
        if (ch == 'r')
        {
            r = 1;
        }
        if (ch == 'b')
        {
            b = 1;
        }
        if (ch == 'g')
        {
            g = 1;
        }
        if ((ch == 'R' && r == 0) || (ch == 'B' && b == 0) || (ch == 'G' && g == 0))
            return false;
    }
    return true;
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
        string str;
        cin >> str;
        sol(str) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}