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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, edges;
    cin >> n >> edges;
    vii graph(n, vi(n));
    vi price(n);
    for (int i = 0; i < edges; i++)
    {
        int u, uv;
        cin >> u >> uv;
        graph[u][uv] = true;
        graph[u][uv] = true;
    }

    int q;
    cin >> q;
    return 0;
}