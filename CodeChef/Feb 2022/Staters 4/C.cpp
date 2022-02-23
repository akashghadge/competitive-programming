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
int sol(string str)
{
    string temp = str;
    int res = 0;
    reverse(temp.begin(), temp.end());
    int i = 0, j = 0;
    for (i = 0, j = i; i < str.size(); ++i, ++j)
    {
        while (i < str.size() && str[i] != temp[j])
        {
            i++;
            res++;
        }
    }
    return res;
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
        cout << sol(str) << en;
    }
    return 0;
}