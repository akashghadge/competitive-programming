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

void sol(vi arr, int n)
{
    unordered_map<int, int> mp;
    for (auto val : arr)
    {
        mp[val]++;
    }
    auto compare = [](pii lhs, pii rhs)
    {
        return lhs.second < rhs.second;
    };
    priority_queue<pair<int, int>, vpi, decltype(compare)> pq(compare);
    for (auto val : mp)
        pq.push(val);

    for (int k = 1; k <= n; k++)
    {
        vi curr(k);
    }
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
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N);
    }
    return 0;
}