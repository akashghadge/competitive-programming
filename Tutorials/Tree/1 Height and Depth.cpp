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
vii graph(N);

void dfs(int vertex, int par = -1)
{
    for (auto child : graph[vertex])
    {
        if (par == child)
        {
            depth[vertex] = max(depth[vertex], depth[child]) + 1;
            dfs(child, vertex);
            height[vertex] = (par == -1) ? 0 : height[par] + 1;
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
    int vertex, edges;
    cin >> vertex >> edges;
    for (int i = 0; i < edges; i++)
    {
        int v1, v2;
        cout << v1 << v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    dfs(0);
    cout << "Depth" << en;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " " << depth[i] << en;
    }

    cout << "Height" << en;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " " << height[i] << en;
    }

    return 0;
}