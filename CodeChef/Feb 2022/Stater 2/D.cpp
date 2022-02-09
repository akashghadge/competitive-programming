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
bool sol(vi arr, int n)
{
    unordered_map<int, int> mp;
    for (auto val : arr)
    {
        mp[val]++;
    }
    for (int i = 0; i < mp.size(); i++)
    {
        if (mp.find(i) == mp.end())
        {
            return true;
        }
        else if (mp[i] == 1)
        {
            return false;
        }
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
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vi arr(N * 2);
        for (int i = 0; i < N * 2; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N * 2) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}