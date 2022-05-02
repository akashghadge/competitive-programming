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
string str, t;
void input()
{
    cin >> str >> t;
}
bool valid(string t)
{
    int val = 0;
    for (auto ch : t)
        if (ch == 'a')
            val++;
    return (val == 0);
}
void sol()
{
    if (t.size() == 1)
    {
        if (t[0] == 'a')
        {
            cout << 1 << en;
        }
        else
        {
            cout << pow(2, str.size()) << en;
        }
    }
    else
    {
        if (valid(t))
        {
            cout << pow(2, str.size()) << en;
        }
        else
        {
            cout << -1 << en;
        }
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