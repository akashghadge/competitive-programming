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
bool sol(string str, char ch)
{
    if (str.size() == 1 && str[0] != ch)
    {
        return false;
    }
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0 &&  ch == str[i])
        {
            return true;
        }
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
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        char ch;
        cin >> str >> ch;
        sol(str, ch) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}