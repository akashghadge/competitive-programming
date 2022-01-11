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
string sol(string str)
{
    int n = str.size();
    string ans;
    for (int i = 0; i < n;)
    {
        if (str[i] == '.')
        {
            ans += "0";
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            ans += "2";
            i += 2;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            ans += "1";
            i += 2;
        }
    }
    return ans;
}
int main()
{
    FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    cout << sol(str) << en;
    return 0;
}