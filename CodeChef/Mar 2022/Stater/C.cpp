#include <bits/stdc++.h>
using namespace std;
#define f(itr, a, b) for (long long itr = a; itr < b; itr++)
#define ll long long
#define pb push_back
#define vll vector<long long>
#define vc vector
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)

void comnected_comps(long long vertex, bool visited[], vector<long long> *matrix)
{

    visited[vertex] = 1;

    for (auto itr : matrix[vertex])
    {
        if (!visited[itr])
            comnected_comps(itr, visited, matrix);
    }
}
void sol()
{
    ll n, m;
    cin >> n >> m;
    vll adj[n];
    for (int itr = 0; itr < m; itr++)
    {
        long long x, y;
        cin >> x >> y;
        x--, y--; // 0 based indexing
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool vis[n];
    memset(vis, false, sizeof(vis));
    comnected_comps(0, vis, adj);
    ll ans = 0;
    while (!vis[n - 1])
    {
        bool vis2[n];
        memset(vis2, false, sizeof(vis2));
        f(itr, 0, n) if (vis[itr])
        {
            if (itr + 1 < n)
            {
                comnected_comps(itr + 1, vis2, adj);
            }
            if (itr - 1 >= 0)
            {
                comnected_comps(itr - 1, vis2, adj);
            }
        }
        f(itr, 0, n)
            vis[itr] |= vis2[itr];
        ans++;
    }
    cout << ans << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    tie;
    int T;
    cin >> T;
    while (T--)
    {
        sol();
    }
    return 0;
}