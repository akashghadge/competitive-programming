#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool sol(string str)
{
    for (auto ch : str)
    {
        if (ch == 'H')
            return true;
        else if (ch == 'Q')
            return true;
        else if (ch == '9')
            return true;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str;
    cin >> str;
    sol(str) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}