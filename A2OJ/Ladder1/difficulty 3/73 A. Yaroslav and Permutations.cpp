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
bool sol(vi arr, int n)
{
    if (n == 1)
        return true;
    unordered_map<int, int> mp;
    for (auto val : arr)
    {
        mp[val]++;
    }
    for (auto val : mp)
    {
        if (val.second > (n + 1) / 2)
            return false;
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
    int N;
    cin >> N;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sol(arr, N) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}