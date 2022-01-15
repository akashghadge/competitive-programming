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
    int u = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u <= l)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << en;
    return 0;
}