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
string sol(string str)
{
    unordered_map<char, int> mp;
    mp['4'] = 0;
    mp['7'] = 0;
    for (auto ch : str)
        if (ch == '7' || ch == '4')
            mp[ch]++;
    if (mp['4'] == 0 && mp['7'] == 0)
        return "-1";
    string ans = (mp['4'] >= mp['7'] ? "4" : "7");
    return ans;
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
    cout << sol(str) << en;
    return 0;
}