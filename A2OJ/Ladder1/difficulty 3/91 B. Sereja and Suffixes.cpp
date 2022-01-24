#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N, M;
    cin >> N;
    cin >> M;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    vi dist(N, 1);
    mp[arr[N - 1]]++;
    for (int i = N - 2; i >= 0; i--)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            dist[i] = dist[i + 1] + 1;
            mp[arr[i]]++;
        }
        else
        {
            dist[i] = dist[i + 1];
        }
    }
    while (M--)
    {
        int l;
        cin >> l;
        cout << dist[l - 1] << en;
    }

    return 0;
}