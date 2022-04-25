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
string str;
void input()
{
    cin >> str;
}
bool sol()
{
    // minmum one zero
    int all_zero = 0;
    for (auto ch : str)
    {
        if (ch == '0')
            all_zero++;
    }
    if (all_zero == str.size())
        return true;
    bool f = 0;
    for (auto ch : str)
    {
        if (ch == '0')
            f = 1;
    }
    bool f2 = 0;
    int evens = 0;
    for (auto ch : str)
    {
        if (((ch - '0') % 2 == 0))
            evens++;
    }
    if (evens >= 2)
        f2 = true;
    int ans = 0;
    for (auto ch : str)
    {
        ans += ch - '0';
    }
    return (f && f2 && ((ans % 3) == 0));
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
        sol() ? cout << "red" : cout << "cyan";
        cout << en;
    }
    return 0;
}