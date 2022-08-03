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
int n;
vi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int sol()
{
    unordered_map<int, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]].insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.size() == n - i)
        {
            return i;
        }
        else
        {
            mp[arr[i]].erase(i);
            if (mp[arr[i]].size() == 0)
                mp.erase(arr[i]);
        }
    }
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
        cout << sol() << en;
    }
    return 0;
}