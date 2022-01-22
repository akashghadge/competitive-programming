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
int sol(vi arr, int n)
{
    unordered_map<int, int> mp;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n * 2; i++)
    {
        int num = arr[i];
        // if we find
        if (mp.find(num) != mp.end())
        {
            ans.push_back({mp[num] + 1, i + 1});
            mp.erase(num);
        }
        else
        {
            mp[num] = i;
        }
    }
    if (ans.size() != n)
    {
        cout << -1 << en;
        return 0;
    }
    for (auto val : ans)
    {
        cout << val.first << " " << val.second << en;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FAST;
    int N;
    cin >> N;
    vi arr(N * 2);
    for (int i = 0; i < N * 2; i++)
    {
        cin >> arr[i];
    }
    sol(arr, N);
    return 0;
}