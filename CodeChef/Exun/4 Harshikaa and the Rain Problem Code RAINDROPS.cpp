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
        int N, M;
        cin >> N;
        vector<vector<pair<int, int>>> tree(N + 1);
        for (int i = 0; i < N; i++)
        {
            int v, e;
            cin >> v >> e;
            tree[v].push_back({e, 0});
        }
        
    }

    return 0;
}