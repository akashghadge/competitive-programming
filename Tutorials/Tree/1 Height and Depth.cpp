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
const int N = 1e5;
vi height(N, 0);
vi depth(N, 0);

void dfs(int vertex, vii &graph, int par = -1)
{
    // cout << vertex << en;
    depth[vertex] = (par == -1) ? 1 : depth[par] + 1;
    int max_height = 0;
    for (auto child : graph[vertex])
    {
        if (par == child)
            continue;
        dfs(child, graph, vertex);
        max_height = max(max_height, height[child]);
    }
    height[vertex] = max_height + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int vertex;
    cin >> vertex;
    vii graph(vertex);
    for (int i = 0; i < vertex - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(0, graph);
    cout << "Depth:" << en;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " " << depth[i] << en;
    }
    cout << "Height:" << en;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " " << height[i] << en;
    }

    return 0;
}