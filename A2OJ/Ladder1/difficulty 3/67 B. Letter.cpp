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
bool sol(string s, string t)
{
    unordered_map<char, int> mp;
    for (auto ch : s)
        mp[ch]++;
    for (auto ch : t)
    {
        if (ch == ' ')
            continue;
        if (mp.find(ch) == mp.end() || mp[ch] <= 0)
        {
            return false;
        }
        mp[ch]--;
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string s, t;
    getline(cin, s);
    getline(cin, t);
    sol(s, t) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}