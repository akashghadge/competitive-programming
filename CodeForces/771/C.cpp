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
vii construct(vi arr, int n)
{
    vii graph(n + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                graph[arr[i]].push_back(arr[j]);
                graph[arr[j]].push_back(arr[i]);
            }
        }
    }
    return graph;
}
void dfs(vii graph, int src, vi &visited)
{
    if (visited[src])
        return;
    visited[src] = true;
    for (auto val : graph[src])
    {
        if (!visited[val])
            dfs(graph, val, visited);
    }
}
// int sol(vi arr, int n)
// {
//     vii graph = construct(arr, n);
//     int ans = 0;
//     vi visited(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(graph, i, visited);
//             ans++;
//         }
//     }
//     // cout << "Graph" << en;
//     // for (int i = 0; i <= n; i++)
//     // {
//     //     cout << i << "->";
//     //     for (auto val : graph[i])
//     //     {
//     //         cout << val << " ";
//     //     }
//     //     cout << en;
//     // }

//     return ans;
// }

int sol(vi arr, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            ans++;
        }
    }
    return ans;
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
        cout << sol(arr, N) << en;
    }
    return 0;
}