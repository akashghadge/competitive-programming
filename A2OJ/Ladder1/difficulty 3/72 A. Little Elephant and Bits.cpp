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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str;
    cin >> str;
    int n = str.size();
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            str.erase(i, 1);
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        str.pop_back();
        cout << str << en;
    }
    else
        cout << str << en;

    return 0;
}