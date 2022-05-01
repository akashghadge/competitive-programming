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
bool help(unordered_map<char, int> mp)
{
    if (mp.size() == 1)
        return false;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (auto val : mp)
    {
        mx = max(val.second, mx);
        mn = min(val.second, mn);
    }
    return (mx - mn >= 2);
}
bool valid(int k)
{
    unordered_map<char, int> mp;
    int n = str.size();
    for (auto val : str)
        mp[val] = 0;
    for (int i = 0; i < k; i++)
    {
        mp[str[i]]++;
    }
    for (int i = k; i < n; i++)
    {
        mp[str[i - k]]--;
        mp[str[i]]++;
        if (help(mp))
            return false;
    }
    return true;
}

bool sol()
{
    int lo = 1;
    int hi = str.size();
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (!valid(mid))
            return false;
        else
            lo = mid + 1;
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
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}