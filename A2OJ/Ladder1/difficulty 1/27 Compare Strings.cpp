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
int sol(string s, string t)
{
    transform(s.begin(), s.end(), s.begin(), ::towlower);
    transform(t.begin(), t.end(), t.begin(), ::towlower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            continue;
        else if (s[i] < t[i])
            return -1;
        else if (s[i] > t[i])
            return 1;
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str1, str2;
    cin >> str1 >> str2;
    cout << sol(str1, str2) << en;
    return 0;
}