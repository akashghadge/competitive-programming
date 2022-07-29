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
bool valid(string curr)
{
    vi mp(26, 0);
    for (auto ch : curr)
        mp[ch - 'a']++;
    for (auto val : mp)
        if (val == 1)
            return 0;
    return 1;
}
void sol()
{
    unordered_map<char, int> mp;
    int once = 1;
    int start = 0;
    int n = str.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < n - i + 1; j++)
        {
            string temp = str.substr(i, j);
            if (valid(temp))
                ans++;
        }
    }
    cout << ans << en;
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
        sol();
    }
    return 0;
}