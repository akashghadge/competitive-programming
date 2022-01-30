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
vi sol(v<v<pii>> graph, int n)
{
    
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
        int n;
        v<v<pii>> graph(n);
        for (int i = 0; i < n - 1; i++)
        {
            int v1, v2;
            cin >> v1 >> v2;
            graph[v1].push_back({v2, 1});
            graph[v2].push_back({v1, 1});
        }
        vector<int> ans = sol(graph, n);
    }
    return 0;
}