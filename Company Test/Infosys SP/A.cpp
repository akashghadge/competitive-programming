#include <bits/stdc++.h>
using namespace std;
void dfs(int src, vector<int> vis, vector<vector<int>> &adj, vector<int> &a, int curr, int *mx)
{
    if (vis[src])
        return;
    curr += a[src];
    *mx = max(*mx, curr);
    vis[src] = 1;
    for (auto nbr : adj[src])
    {
        dfs(nbr, vis, adj, a, curr, mx);
    }
}
int sol(vector<int> a, vector<int> b, vector<int> c, int n)
{
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((b[i] ^ b[j]) < c[j])
                adj[i].push_back(j);
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> vis(n, 0);
        dfs(i, vis, adj, a, 0, &mx);
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    cout << sol(a, b, c, n) << endl;
}